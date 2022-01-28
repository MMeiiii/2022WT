#include <stdio.h>

int main (){

    int n;

    while(scanf("%d",&n) && n!=0){

        int len=0,binary[35],ans=0;

        //轉二進制
        if(n==1){
            binary[len]=1;
        }
        else{
            while(n/2!=0){
                binary[len]=n%2;
                len++;
                n=n/2;
            }
            binary[len]=1;
        }

        int i=0;
        //+1檢查
        while(binary[i]+1==2){
            ans++;
            i++;
        }

        printf("%d\n",ans);

    }
    return 0;
}
