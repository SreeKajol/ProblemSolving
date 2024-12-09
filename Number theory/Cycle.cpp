//      ॐ
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>g;
vector<bool>vis;
bool flag = false;

void dfs(int vertex, int par = -1){
    vis[vertex]=true;

    for(auto child : g[vertex]){
        if(vis[child] && child!=par){
            flag=true;
            return;
        }
        if(vis[child])continue;
        
        dfs(child, vertex);
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    g.resize(n);
    vis.resize(n);

    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        x--, y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(0);

    if(flag){
        cout<<"YES\n";
    }
    else cout<<"NO\n";

    return 0;
}