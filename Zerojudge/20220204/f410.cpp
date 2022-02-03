#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,element[1005];
    vector<int>odd;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> element[i];
    }

    sort(element,element+n);

    for(int i=0;i<n;i++){
        if(element[i]%2==0){
            cout << element[i] << " ";
        }
        else{
            odd.push_back(element[i]);
        }
    }

    int odd_len=odd.size();

    for(int i=odd_len-1;i>=0;i--){
        cout << odd[i] << " ";
    }

    return 0;
}
