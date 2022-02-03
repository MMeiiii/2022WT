#include<bits/stdc++.h>
using namespace std;

vector<int> failure_function;

void create_failure_function(string pattern,int pattern_len){

    int pointer=-1;

    failure_function.push_back(-1);

    for(int i=1;i<pattern_len;i++){

        while(pattern[i]!=pattern[pointer+1] && pointer>=0){
            pointer=failure_function[pointer];
        }
        if(pattern[pointer+1]==pattern[i]){
            failure_function.push_back(++pointer);
        }
        else{
            pointer=-1;
            failure_function.push_back(-1);
        }
    }
}

int main (){


    int n,ans=0;
    string str,pattern;

    cin >> n >> pattern >> str;

    int str_len=str.length(),pointer=0,pattern_len=pattern.length();

    create_failure_function(pattern,pattern_len);

    for(int i=0;i<str_len;i++){

        //KMP
        while(pointer!=0 && str[i]!=pattern[pointer]){
            if(str[i]!=pattern[pointer]){
                pointer=failure_function[pointer-1]+1;
            }
        }

        if(str[i]==pattern[pointer]){
            pointer++;
        }

        if(pointer==pattern.length()){
            ans++;
            pointer=failure_function[pointer-1]+1;
        }
    }

    if(n==ans){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

    return 0;
}
