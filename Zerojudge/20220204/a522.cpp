#include<bits/stdc++.h>
using namespace std;

bool DP(int aim,int num,int len[25]){

    int list_[num+5][aim+5];

    for(int i=0;i<=aim;i++){
        if(i==0 || i==len[0]){
            list_[0][i]=1;
        }
        else{
            list_[0][i]=0;
        }
    }

    for(int i=0;i<num;i++){
        list_[i][0]=1;
    }

    for(int i=1;i<num;i++){
        for(int j=1;j<=aim;j++){
            if(list_[i-1][j]==1 ){
                list_[i][j]=1;
            }
            else if(j-len[i]>=0){
                if(list_[i-1][j-len[i]]==1){
                    list_[i][j]=1;
                }
                else{
                    list_[i][j]=0;
                }
            }
            else{
                list_[i][j]=0;
            }
        }
    }
    return list_[num-1][aim];
}

int main(){

    int n,test=0;

    cin >> n;

    while(n--){

        test++;

        int aim,num,len[25];

        cin >> aim >> num;

        for(int i=0;i<num;i++){
            cin >> len[i];
        }

        if(DP(aim,num,len)){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}
