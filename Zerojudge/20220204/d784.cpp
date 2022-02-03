#include<bits/stdc++.h>
using namespace std;

int DP(int m,int element[105]){

    int max_=element[0],num=element[0];

    for(int i=1;i<m;i++){
        if(num<0){
            num=element[i];
        }
        else{
            num=num+element[i];
        }
        max_=max(max_,num);
    }
    return max_;
}


int main(){

    int n;

    cin >> n;

    while(n--){

        int m,element[105];

        cin >>  m;

        for(int i=0;i<m;i++){
            cin >> element[i];
        }

        cout << DP(m,element) << "\n";
    }

    return 0;
}
