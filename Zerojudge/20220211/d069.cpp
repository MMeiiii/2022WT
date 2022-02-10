#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,t;

    cin >> t;

    while(t--){

        cin >> n;

        if((n%4==0 && n%100!=0) || n%400==0){
            cout << "a leap year\n";
        }
        else{
            cout << "a noraml year\n";
        }
    }
    return 0;
}
