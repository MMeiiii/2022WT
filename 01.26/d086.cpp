#include<bits/stdc++.h>
using namespace std;

int main (){

    string n;

    while(cin>>n && n!="0"){

       int len=n.size(),sum=0,key=0;

       for(int i=0;i<len;i++){

            if(n[i]>='a' && n[i]<='z'){
                sum+=(n[i]-'a'+1);
            }
            else if(n[i]>='A' && n[i]<='Z'){
                sum+=(n[i]-'A'+1);
            }
            else{
                key=1;
                break;
            }
       }

       if(key==1){
            cout << "Fail" << endl;
       }
       else{
            cout << sum << endl;
       }
    }
    return 0;
}
