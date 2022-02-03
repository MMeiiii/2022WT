#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    while(n--){

        int h1,m1,h2,m2,d,num1,num2;
        cin >> h1 >> m1 >> h2 >> m2 >> d;

        num1=h1*60+m1;
        num2=h2*60+m2;

        if(num2-num1>=d){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }
    }
    return 0;
}
