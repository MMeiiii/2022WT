#include<bits/stdc++.h>
using namespace std;

vector<int>prime;

void create_prime_list(){

    prime.push_back(2);

    for(int i=3;i<10000;i++){
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

bool binarysearch(int i){

    int start=0,last=prime.size(),mid=(start+last)/2;

    while(start<last){
        if(i<prime[mid]){
            last=mid;
        }
        else if(i>prime[mid]){
            start=mid+1;
        }
        else if(i==prime[mid]){
            return true;
        }
        mid=(start+last)/2;
    }

    return false;

}

int main (){

    int a,b;

    create_prime_list();

    while(cin >> a >> b){

        int ans=0;

        if(a==2 || a==1){
            ans=1;
        }

        if(a%2==0){
            a++;
        }

        if(a==1 && b==1){
            ans=0;
        }
        else if(a<10000 && b <10000){
            for(int i=a;i<=b;i=i+2){
                if(binarysearch(i)){
                    ans++;
                }
            }
        }
        else if(a<10000 && 10000<b){
            for(int i=a;i<10000;i=i+2){
                if(binarysearch(i)){
                    ans++;
                }
            }
            for(int i=10001;i<=b;i=i+2){
                int key=0;
                for(int j=0;j<prime.size() && prime[j]*prime[j] <= i;j++){
                    if(i%prime[j]==0){
                        key=1;
                        break;
                    }
                }
                if(key==0){
                    ans++;
                }
            }
        }
        else if(10000<a && 10000<b){
            for(int i=a;i<=b;i=i+2){
                int key=0;
                for(int j=0;j<prime.size() && prime[j]*prime[j] <= i ;j++){
                    if(i%prime[j]==0){
                        key=1;
                        break;
                    }
                }
                if(key==0){
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
