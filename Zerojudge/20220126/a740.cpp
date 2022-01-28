#include<bits/stdc++.h>
using namespace std;

vector<int> prime;

void create_prime_list(){

    prime.push_back(2);

    for(int i=3;i<45000;i=i+2){
        int key=0;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                key=1;
                break;
            }
        }
        if(key==0){
            prime.push_back(i);
        }
    }
}

int main (){

    int n;

    create_prime_list();

    while(cin>>n){

        int ans=0;

        for(int i=0;i<prime.size() && (prime[i]*prime[i]<=n);i++){

            while(n%prime[i]==0){
                n=n/prime[i];
                ans=ans+prime[i];
            }

            if(n==1){
                break;
            }
        }
        if(n!=1){
            ans+=n;
        }
        cout << ans << endl;
    }
    return 0;
}
