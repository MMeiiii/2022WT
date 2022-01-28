#include <iostream>
using namespace std;

int main (){

    int n;

    while(cin>>n){

        cout << (1+n)*n/2 << " "; //f(n)

        long int ans=1;

        for(int i=2;i<=n;i++){
            ans=ans+(1+i)*i/2;
        }

        cout << ans << endl;

    }
    return 0;
}
