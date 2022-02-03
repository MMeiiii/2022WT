#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;

    cin >> s;

    queue<char> str;

    int str_len=s.length();

    for(int i=0;i<str_len;i++){
        str.push(s[i]);
    }

    for(int i=0;i<str_len;i++){
        for(int j=0;j<str_len;j++){
            cout << str.front();
            str.push(str.front());
            str.pop();
        }
        str.push(str.front());
        str.pop();
        cout << "\n";
    }
    return 0;
}
