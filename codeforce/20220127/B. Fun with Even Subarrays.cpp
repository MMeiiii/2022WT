#include<bits/stdc++.h>
using namespace std;

int main (){

    int testcase;

    cin >> testcase;

    while(testcase--){

        int n,array_[20005],ans=0,num=1;

        cin >> n;

        for(int i=0;i<n;i++){

            cin >> array_[i];

        }

        for(int i=n-2;i>=0;i--){

            if(array_[i]!=array_[n-1]){
                ans++;
                i=i-num+1;
                num=num*2;
            }
            else{
                num++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

/*
4 2 1 3
2
*/
