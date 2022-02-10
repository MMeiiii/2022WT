#include<bits/stdc++.h>
using namespace std;

int main(){

    long int a,b;

    cin >> a >> b;

    cout << ((a%2==0 || b%2==0) ? (b-a)/2+1:(b-a)/2) << "\n";


    return 0;
}
