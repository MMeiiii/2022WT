#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,A[105],ans=0;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> A[i];

        if(A[i]<=10){
            ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}
