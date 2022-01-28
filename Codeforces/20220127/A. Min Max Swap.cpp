#include<bits/stdc++.h>
using namespace std;

int main (){

    int testcase;

    cin >> testcase;

    while(testcase--){

        int n,array_[4][10005];

        cin >> n;

        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                cin >> array_[i][j];
            }
        }

        for(int i=0;i<n;i++){
            if(array_[0][i]<array_[1][i]){
                swap(array_[0][i],array_[1][i]);
            }
        }

        sort(array_[0],array_[0]+n);
        sort(array_[1],array_[1]+n);

        cout << array_[0][n-1] * array_[1][n-1] << "\n";
    }
    return 0;
}
