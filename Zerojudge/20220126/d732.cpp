#include<bits/stdc++.h>
using namespace std;

int binarysearch(int A[],int value,int len){

    int start=0,last=len,mid=(start+last)/2;

    while(start<last){

        if(value<A[mid]){
            last=mid;
        }
        else if(value>A[mid]){
            start=mid+1;
        }
        else if(value==A[mid]){
            return mid;
        }

        mid=(start+last)/2;
    }

    return -1;

}

int main (){

    int len,n,A[100000];

    cin >> len >> n;

    for(int i=0;i<len;i++){
        cin >> A[i];
    }

    for(int i=0;i<n;i++){

        int value;

        cin >> value;

        cout << binarysearch(A,value,len)+1 << endl;

    }
    return 0;
}
