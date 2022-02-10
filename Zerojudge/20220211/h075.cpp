#include<bits/stdc++.h>
using namespace std;

typedef struct data data;

struct data{

    int num,computer,math,english;
    double total;

}people[8];

bool cmp(data a,data b){

    if(a.total!=b.total){
        return a.total>b.total;
    }
    if(a.computer!=b.computer){
        return a.computer>b.computer;
    }
    if(a.math!=b.math){
        return a.math>b.math;
    }
    if(a.english!=b.english){
        return a.english>b.english;
    }

    return a.num<b.num;
}

int main(){

    int n;

    cin >> n;

    for(int i=0;i<n;i++){
        people[i].total=0;
        cin >> people[i].num >> people[i].computer >> people[i].math >> people[i].english;
        people[i].total=(people[i].total+5*people[i].computer+3*people[i].math+2*people[i].english)/10;
    }

    sort(people,people+n,cmp);


    for(int i=0;i<n;i++){
        cout << people[i].num << " " << people[i].total << "\n";
    }

    return 0;
}
