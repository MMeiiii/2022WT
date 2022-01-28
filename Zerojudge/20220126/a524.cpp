#include <iostream>
#include <vector>
using namespace std;

vector<int> ans;
int visited[10];

void DFS(int n,int layer){

    if(layer==0){
        for(int i=0;i<n;i++){
            cout << ans[i];
        }
        cout << endl;
    }

    for(int i=n;i>=1;i--){

        if(visited[i]==0){
            ans.push_back(i);
            visited[i]=1;
            layer--;
            DFS(n,layer);
            ans.pop_back();
            visited[i]=0;
            layer++;
        }

    }

    return;

}

int main (){

    int n;

    while(cin>>n){

        DFS(n,n);

    }
    return 0;
}
