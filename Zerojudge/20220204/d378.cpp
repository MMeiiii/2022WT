#include<bits/stdc++.h>
using namespace std;

int create_value(int n,int m,int map_[105][105]){

    int value[105][105];

    value[0][0]=map_[0][0];

    for(int j=1;j<m;j++){
        value[0][j]=value[0][j-1]+map_[0][j];
    }

    for(int i=1;i<n;i++){
        value[i][0]=value[i-1][0]+map_[i][0];
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            value[i][j]=min(value[i][j-1],value[i-1][j])+map_[i][j];
        }
    }

    return value[n-1][m-1];
}

int main (){

    int n,m,ans=0;

    while(cin >> n >> m){

        ans++;

        int map_[105][105];

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> map_[i][j];
            }
        }
        cout << "Case #" << ans << " :\n" <<  create_value(n,m,map_) << "\n";
    }
    return 0;
}
