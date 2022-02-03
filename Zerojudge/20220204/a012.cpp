#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n,m;

    while(cin >> n >> m){
        if(n>m){
            cout << n-m << "\n";
        }
        else{
            cout << m-n << "\n";
        }
    }
    return 0;
}
