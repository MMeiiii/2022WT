#include<bits/stdc++.h>
using namespace std;

int create_list(int aim,int n,int coin[15]){

    int list_[n+5][aim+5];

    for(int i=0;i<=aim;i++){
        list_[0][i]=-1;
    }

    for(int i=0;i<=n;i++){
        list_[i][0]=0;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=aim;j++){

            if(list_[i][j-coin[i]]==-1 || j<coin[i]){
                list_[i][j]=list_[i-1][j];
            }
            else{
                if(list_[i-1][j]!=-1){
                    list_[i][j]=min(list_[i][j-coin[i]]+1,list_[i-1][j]);
                }
                else{
                    list_[i][j]=list_[i][j-coin[i]]+1;
                }

            }
        }
    }
    return list_[n][aim];
}

int main(){

    int n,aim; // nºØ

    while(cin >> aim >> n ){

        int coin[15];

        for(int i=1;i<=n;i++){
            cin >> coin[i];
        }
        cout << create_list(aim,n,coin) << endl;
    }
    return 0;
}
