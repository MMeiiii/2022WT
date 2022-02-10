#include<bits/stdc++.h>
using namespace std;

typedef struct data data;

struct data{

    int v1;
    int v2;
    int weight;

}edge[200005];

bool cmp(data a, data b){

    return a.weight < b.weight;

}

int find_parent(int a,int parent[100005]){

        while(a!=parent[a]){
            a = parent[a];
        }
        return a;
}

long long int min_spanning_tree(int num_node,int num_edge){

        int parent[num_node+5],num[num_node+5],ans_edge=0;
        long long int ans=0;

        for(int i=0;i<num_node;i++){
            parent[i]=i;
            num[i]=1;
        }

        sort(edge,edge+num_edge,cmp);

        for(int i=0;i<num_edge && ans_edge<num_node;i++){

            int a,b;
            a = find_parent(edge[i].v1,parent);
            b = find_parent(edge[i].v2,parent);

            if(a!=b){
                ans+=edge[i].weight;
                ans_edge++;
                if(num[a]<num[b]){
                    parent[a]=b;
                    num[b]+=num[a];
                }
                else{
                    parent[b]=a;
                    num[a]+=num[b];
                }
            }

        }
        if(ans_edge==num_node-1){
            return ans;
        }
        else{
            return -1;
        }

}

int main(){

    int num_node,num_edge;

    while(cin >> num_node >> num_edge){

        for(int i=0;i<num_edge;i++){

            cin >> edge[i].v1 >> edge[i].v2 >> edge[i].weight;

        }

        cout << min_spanning_tree(num_node,num_edge) << "\n";

    }
    return 0;
}
