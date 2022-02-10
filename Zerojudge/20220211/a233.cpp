#include<bits/stdc++.h>
using namespace std;

int A[1000000];

int main(){

    int n;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> A[i];
    }

    sort(A,A+n);

    for(int i=0;i<n;i++){
        cout << A[i] << " ";
    }
    cout << "\n";
    return 0;
}
