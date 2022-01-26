#include<bits/stdc++.h>
using namespace std;

typedef struct data data;

struct data{

    int year;
    int month;
    int day;

}A[5];

int normal_month[15]={31,28,31,30,31,30,31,31,30,31,30,31};
int lunar_month[15]={31,29,31,30,31,30,31,31,30,31,30,31};

int judge_normal_lunar(int a){

    if(a%4!=0 || (a%100==0 && a%400!=0)){
        return 0;
    }

    return 1;

}


int main (){

    while(cin >> A[0].year >> A[0].month >> A[0].day >> A[1].year >> A[1].month >> A[1].day){

        int day=0,d[5];

        d[0]=0;
        d[1]=0;

        for(int i=0;i<2;i++){

            //年
           for(int j=1;j<A[i].year;j++){

                if(judge_normal_lunar(j)==0){
                    d[i]+=365;
                }
                else{
                    d[i]+=366;
                }
            }

            //月+日
            if(judge_normal_lunar(A[i].year)==0){
                for(int j=0;j<A[i].month-1;j++){
                    d[i]+=normal_month[j];
                }
            }
            else{
                for(int j=0;j<A[i].month-1;j++){
                    d[i]+=lunar_month[j];
                }
            }

            d[i]+=A[i].day;

        }

        day=day+(d[1]-d[0]);

        if(day<0){
            cout << -day << endl;
        }
        else{
            cout << day << endl;
        }


    }
    return 0;
}
/*

閏年規則:
1.可以被4整除
2.100的倍數則要同時滿足被400整除，若沒辦法則不是

*/
