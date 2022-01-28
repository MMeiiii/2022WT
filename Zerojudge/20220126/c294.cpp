#include<bits/stdc++.h>
using namespace std;

int main (){

    int A[5];

    for(int i=0;i<3;i++){
        cin >> A[i];
    }

    sort(A,A+3);

    for(int i=0;i<3;i++){
        cout << A[i] << " ";
    }

    cout << endl;

    if(A[0]+A[1]<=A[2]){
        cout << "No" << endl;
    }
    else if(A[0]*A[0]+A[1]*A[1]<A[2]*A[2]){
        cout << "Obtuse" << endl;
    }
    else if(A[0]*A[0]+A[1]*A[1]==A[2]*A[2]){
        cout << "Right" << endl;
    }
    else if(A[0]*A[0]+A[1]*A[1]>A[2]*A[2]){
        cout << "Acute" << endl;
    }

    return  0;
}
