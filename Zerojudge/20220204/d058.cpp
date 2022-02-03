#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    if(n<0){
        cout << "-1" << "\n";
    }
    else if(n==0){
        cout << "0" << "\n";
    }
    else if(n>0){
        cout << "1" << "\n";
    }
    return 0;
}
