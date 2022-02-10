#include<bits/stdc++.h>
using namespace std;

void DFS(string s, int n,int left_num,int right_num,int pos){

    if(left_num==right_num && pos==2*n){
        cout << s << "\n";
        return;
    }

    if(left_num<n){
        s.push_back('(');
        DFS(s,n,left_num+1,right_num,pos+1);
        s.pop_back();
    }
    if(left_num>right_num && right_num<n){
        s.push_back(')');
        DFS(s,n,left_num,right_num+1,pos+1);
        s.pop_back();
    }

    return;
}

int main(){

    int n;

    while(cin >> n){

        string s;
        int left_num=1,right_num=0,pos=1;

        s.push_back('(');

        DFS(s,n,left_num,right_num,pos);

        cout << "\n";

    }
    return 0;
}

