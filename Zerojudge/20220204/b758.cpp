#include<bits/stdc++.h>
using namespace std;

int main(){

    int x,y;

    cin >> x >> y;

    x=(x+2+(y+30)/60)%24;

    if(x<9){
        cout << "0" << x << ":";
    }
    else{
        cout << x << ":";
    }

    y=(y+30)%60;

    if(y<9){
        cout << "0" << y << "\n";
    }
    else{
        cout << y << "\n";
    }


    return 0;
}
