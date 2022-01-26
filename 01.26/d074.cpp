#include<bits/stdc++.h>
using namespace std;

int main (){

    int n,A[15];

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> A[i];
    }

    sort(A,A+n);

    cout << A[n-1] << endl;

    return  0;
}
