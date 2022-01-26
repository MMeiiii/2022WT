#include<bits/stdc++.h>
using namespace std;

char symbol[10]={'+','-','*','/','%','(',')'};
int priority[10]={1,1,2,2,2,3,4};

char symbol_stack[1000];

int symbol_stack_pointer;

int symbol_stack_priority[1000];

int symbol_stack_priority_pointer;

int sum_of_postfix(string postfix){

    stringstream ss;

    int key=0,num;
    stack<int> numberint;

    for(int i=0;i<postfix.size();i++){

        if(postfix[i]!=' ' && (0<=postfix[i]-'0') && (postfix[i]-'0'<=9)){

            string numberstr;
            while(postfix[i]!=' '){
                numberstr.push_back(postfix[i]);
                i++;
            }
            i--;
            ss.str("");
            ss.clear();
            ss << numberstr;
            ss >> num;
            numberint.push(num);
        }
        else if(postfix[i]!=' '){
            int a=numberint.top();
            numberint.pop();
            int b=numberint.top();
            numberint.pop();

            //cout << "a=" << a << " " << "b=" << b << endl;

            if(postfix[i]=='+'){
                numberint.push(b+a);
            }
            else if(postfix[i]=='-'){
                numberint.push(b-a);
            }
            else if(postfix[i]=='*'){
                numberint.push(b*a);
            }
            else if(postfix[i]=='/'){
                numberint.push(b/a);
            }
            else if(postfix[i]=='%'){
                numberint.push(b%a);
            }
        }
    }

    return numberint.top();
}

string infix_into_postfix(string infix, string postfix){

    int infix_len = infix.size();

    for(int i=0;i<infix_len;i++){

        //num
        if( (0<=infix[i]-'0') && (infix[i]-'0'<=9) ){
            while( (0<=infix[i]-'0') && (infix[i]-'0'<=9) && (i<infix_len) ){
                postfix.push_back(infix[i]);
                i++;
            }
            i--;
            postfix.push_back(' ');
        }
        else if(infix[i]==' '){
            continue;
        }
        //symbol
        else{

            int now_priority=0;

            for(int j=0;j<7;j++){
                if( infix[i]==symbol[j] ){
                    now_priority=priority[j];
                }
            }

            //空的直接丟
            if(symbol_stack_pointer==-1){
                symbol_stack[++symbol_stack_pointer]=infix[i];
                if(infix[i]=='('){
                    symbol_stack_priority[++symbol_stack_priority_pointer]=0;
                }
                else{
                    symbol_stack_priority[++symbol_stack_priority_pointer]=now_priority;
                }
            }
            else if(infix[i]==')'){
                while( (symbol_stack[symbol_stack_pointer]!='(') ){
                    postfix.push_back(symbol_stack[symbol_stack_pointer--]);
                    postfix.push_back(' ');
                    symbol_stack_priority_pointer--;
                }
                symbol_stack_pointer--;
                symbol_stack_priority_pointer--;
            }
            //進去的比較小
            else if(now_priority<=symbol_stack_priority[symbol_stack_priority_pointer]){
                while( symbol_stack_pointer!=-1 && symbol_stack[symbol_stack_pointer]!='(' ){
                    postfix.push_back(symbol_stack[symbol_stack_pointer--]);
                    postfix.push_back(' ');
                    symbol_stack_priority_pointer--;
                }
                symbol_stack[++symbol_stack_pointer]=infix[i];
                symbol_stack_priority[++symbol_stack_priority_pointer]=now_priority;
            }
            //進去的比較大
            else if(now_priority>symbol_stack_priority[symbol_stack_priority_pointer]){
                symbol_stack[++symbol_stack_pointer]=infix[i];
                if(infix[i]=='('){
                    symbol_stack_priority[++symbol_stack_priority_pointer]=0;
                }
                else{
                    symbol_stack_priority[++symbol_stack_priority_pointer]=now_priority;
                }
            }
        }
    }

    while(symbol_stack_pointer!=-1){
        postfix.push_back(symbol_stack[symbol_stack_pointer--]);
        postfix.push_back(' ');
        symbol_stack_priority_pointer--;
    }
    return postfix;
}

int main (){

    string infix;

    while(getline(cin,infix,'\n')){

        int ans=0;

        symbol_stack_pointer=-1;
        symbol_stack_priority_pointer=-1;

        string postfix; //重新宣告，避免有上筆資料

        postfix = infix_into_postfix(infix,postfix);

        //cout << postfix << endl;

        ans = sum_of_postfix(postfix);

        cout << ans << endl;
    }
    return 0;
}
