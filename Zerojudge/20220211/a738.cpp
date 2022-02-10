#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b;

    while(cin >> a >> b){

        int c=a%b;

        while(c!=0){
            a=b;
            b=c;
            c=a%b;
        }
        cout << b << "\n";
    }
    return 0;
}
