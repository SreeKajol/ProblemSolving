#include<bits/stdc++.h>
using namespace std;
int const N = 1e5+10;
vector<int>g[N];
bool vis[N];

bool dfs(int vertex, int parent){
    vis[vertex]=true;
    bool isLoopExists=false;
    for(auto child : g[vertex]){
        if(vis[child] && child==parent)continue;
        if(vis[child]) return true;

        isLoopExists |= dfs(child, vertex);

    }
    return isLoopExists;
}

int main()
{
    int v,e;
    cin>>v>>e;
    for(int i=0; i<e; i++){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    bool flag=false;
    for(int i=1; i<=v; i++){
        if(!vis[i]){
            if(dfs(i,-1)){
                flag=true;
                break;
            }
        }
    }
    if(flag)cout<<"YES\n";
    else cout<<"NO\n";
    
    return 0;
}