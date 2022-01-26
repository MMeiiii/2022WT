#include<bits/stdc++.h>
using namespace std;

int main (){

    int n;

    while(cin>>n){

        int A[100000];

        for(int i=0;i<n;i++){
            cin>>A[i];
        }

        sort(A,A+n);

        for(int i=0;i<n;i++){
            cout<< A[i] << " ";
        }

        cout << endl;

    }
    return  0;
}
