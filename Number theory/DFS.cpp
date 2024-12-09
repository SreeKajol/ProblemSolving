//      ॐ
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>graph;
vector<bool>vis;

void dfs(int vertex, int par = -1){
    vis[vertex]=true;
    //1
    for(auto child : graph[vertex]){
        cout<<vertex<<" "<<child<<"\n";
        if(vis[child])continue;
    //2
        dfs(child, vertex);
    //3
    }
    //4
}

int main()
{
    int n,m;
    cin>>n>>m;
    graph.resize(n);
    vis.resize(n,0);

    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        x--, y--;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    dfs(0);

    return 0;
}