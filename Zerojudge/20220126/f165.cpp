#include<bits/stdc++.h>
using namespace std;

int main (){

    int candy,people;

    cin >> candy >> people;

    if(people==0){
        cout << "OK!" << endl;
    }
    else if(candy%people==0){
        cout << "OK!" << endl;
    }
    else{
        cout << candy%people << endl;
    }
    return 0;
}
