#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+10;
vector<int>g[N];
int vis[N];

void dfs(int vertex){
    //1. take action on vertex after entering a vertex
    cout<<vertex<<"\n";
    // if(vis[vertex]) return;
    vis[vertex]=true;
    for(auto child : g[vertex]){
        cout<<"parent : "<<vertex<<" "<<"child : "<<child<<"\n";
        if(vis[child]) continue;
        //2. take action on child before entering a child

        dfs(child);
         //3. take action on child after exiting a child
        
    }
    //4. take action on vertex before exiting a vertex 
}

int main(){
    int v,e;
    cin>>v>>e;
    for(int i=0; i<e; i++){
        int v1, v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    for(int i=1; i<=v; i++){
        if(!vis[i]){
            dfs(i);
        }
    }

    return 0;
}