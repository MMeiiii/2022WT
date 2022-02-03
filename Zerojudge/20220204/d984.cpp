#include<bits/stdc++.h>
using namespace std;

typedef struct data data;

struct data{

    long long int num;
    char name;

}person[5];

bool cmp(data a, data b){

    return a.num<b.num;

}

int main(){

    while(cin >> person[0].num >> person[1].num >> person[2].num){

        person[0].name='A';
        person[1].name='B';
        person[2].name='C';

       sort(person,person+3,cmp);

       if(person[0].num+person[1].num<person[2].num){
            cout << person[2].name << "\n";
       }
       else{
            cout << person[1].name << "\n";
       }
    }
    return 0;
}
