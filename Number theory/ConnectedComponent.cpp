//      ॐ
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>g;
vector<bool>vis;

void dfs(int v, int par = -1){
    vis[v]=true;

    for(auto child : g[v]){
        if(vis[child])continue;;

        dfs(child,v);
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    g.resize(n);
    vis.resize(n,0);

    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        x--, y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    int cnt=0;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i);
            cnt++;
        }
    }
    cout<<cnt<<"\n";

    return 0;
}