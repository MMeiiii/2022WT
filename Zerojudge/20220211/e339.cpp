#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n,a,ans=0;

    cin >> n;

    for(int i=0;i<n;i++){
        long long int a;
        cin >> a;
        ans+=a;
        cout << ans << " ";
    }
    return 0;
}
