#include<bits/stdc++.h>
using namespace std;

char symbol[5]={'+','-','*','/'};

int calculate(int a, int b,int i){

    if(i==0){
        return a+b;
    }
    else if(i==1){
        return a-b;
    }
    else if(i==2){
        return a*b;
    }
    else{
        return a/b;
    }
}

int main(){

    int a,b;
    char ch;

    while(cin >> a >> ch >> b){
        for(int i=0;i<4;i++){
            if(symbol[i]==ch){
                cout << calculate(a,b,i) << "\n";
            }
        }
    }
    return 0;
}
