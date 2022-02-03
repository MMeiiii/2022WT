#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,num=0,kill=0,assist=0,die=0;

    cin >> n;

    while(n--){

        string str;
        cin >> str;
        if(str=="Get_Kill"){
            kill++;
            num++;
            if(num<3){
                cout << "You have slain an enemie." << "\n";
            }
            else if(num==3){
                cout << "KILLING SPREE!" << "\n";
            }
            else if(num==4){
                cout << "RAMPAGE~" << "\n";
            }
            else if(num==5){
                cout << "UNSTOPPABLE!" << "\n";
            }
            else if(num==6){
                cout << "DOMINATING!" << "\n";
            }
            else if(num==7){
                cout << "GUALIKE!" << "\n";
            }
            else if(num>=8){
                cout << "LEGENDARY!" << "\n";
            }
        }
        else if(str=="Get_Assist"){
            assist++;
        }
        else if(str=="Die"){
            die++;
            if(num<3){
                cout << "You have been slained." << "\n";
            }
            else{
                cout << "SHUTDOWN." << "\n";
            }
            num=0;
        }
    }

    cout << kill << "/" << die << "/" << assist << "\n";




    return 0;
}
