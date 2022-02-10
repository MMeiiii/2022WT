#include<bits/stdc++.h>
using namespace std;

int main (){

    int n,m;

    cin >> n >> m;

    cout << (n<m ? m-n:100+m-n) << "\n";

    return 0;
}
