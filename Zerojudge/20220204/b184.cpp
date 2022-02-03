#include<bits/stdc++.h>
using namespace std;

int create_list(int n, int goods[1000][5]){

    int list_[n+5][105];

    for(int i=0;i<=100;i++){
        list_[0][i]=0;
    }

    for(int i=0;i<=n;i++){
        list_[i][0]=0;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=100;j++){

            if(j<goods[i][0]){
                list_[i][j]=list_[i-1][j];
            }
            else{
                list_[i][j]=max(list_[i-1][j],list_[i-1][j-goods[i][0]]+goods[i][1]);

            }
        }
    }
    return list_[n][100];
}

int main (){

    int n;

    while(cin >> n){

        int goods[n+5][5];

        for(int i=1;i<=n;i++){
            cin >> goods[i][0] >> goods[i][1]; //v //value
        }

        cout << create_list(n,goods) << "\n";
    }
    return 0;
}
