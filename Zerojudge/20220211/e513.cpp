#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,n,k=1;
    char ch1, ch2;

    cin >> t;

    while(t--){

        long long int matrix[105][105],flag1=0,flag2=0;

        cin >> ch1 >> ch2 >> n;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> matrix[i][j];
                if(matrix[i][j]<0){
                    flag1=1;
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]!=matrix[n-1-i][n-1-j]){
                    flag2=1;
                    break;
                }
            }
            if(flag2==1){
                break;
            }
        }

        if(flag1!=1 && flag2!=1){
            cout << "Test #" << k <<": Symmetric.\n";
        }
        else{
            cout << "Test #" << k <<": Non-symmetric.\n";
        }
        k++;
    }
    return 0;
}
