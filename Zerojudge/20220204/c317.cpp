#include<bits/stdc++.h>
using namespace std;

int DP(int aim,int coin[5]){

    int list_[5][aim+5];

    for(int i=0;i<=aim;i++){
        list_[0][i]=-1;
    }

    for(int i=0;i<=2;i++){
        list_[i][0]=0;
    }

    for(int i=1;i<=2;i++){
        for(int j=1;j<=aim;j++){
            if(j>=coin[i] && list_[i][j-coin[i]]!=-1){

                if(list_[i-1][j]!=-1){
                    list_[i][j]=min(list_[i-1][j],list_[i][j-coin[i]]+1);
                }
                else{
                    list_[i][j]=list_[i][j-coin[i]]+1;
                }
            }
            else{
                list_[i][j]=list_[i-1][j];
            }
        }
    }
    return list_[2][aim];

}

int main(){

    int n;

    cin >> n;

    while(n--){

        int aim, coin[5];

        cin >> aim >> coin[1] >> coin[2];

        cout << DP(aim,coin) << "\n";

    }
    return 0;
}
