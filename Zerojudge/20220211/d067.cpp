#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    if(n%4!=0 ||(n%100==0 && n%400!=0)){
        cout << "a normal year\n";
    }
    else{
        cout << "a leap year\n";
    }
    return 0;
}
