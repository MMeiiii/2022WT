#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    while(n--){

        int array_[5][10],flag=0;

        for(int i=0;i<2;i++){
            for(int j=0;j<7;j++){
                cin >> array_[i][j];
            }
        }

        //1
        for(int i=0;i<2;i++){
            if(array_[i][1]==array_[i][3] || array_[i][1]!=array_[i][5]){
                flag=1;
                cout << "A";
                break;
            }
        }
        //2
        if(array_[0][6]==0 || array_[1][6]==1){
            flag=1;
            cout << "B";
        }
        //3
        if(array_[0][1]==array_[1][1] || array_[0][3]==array_[1][3] || array_[0][5]==array_[1][5]){
            flag=1;
            cout << "C";
        }

        if(flag==0){
            cout << "None";
        }
        cout << "\n";
    }
    return 0;
}
