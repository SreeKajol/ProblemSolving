#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int>g[N];
bool vis[N];

vector<vector<int>>cc;
vector<int>current_c;

void dfs(int vertex){
    current_c.push_back(vertex);
    vis[vertex]=true;
    for(auto child : g[vertex]){
        if(vis[child]) continue;
        dfs(child);
    }
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
            current_c.clear();
            dfs(i);
            cc.push_back(current_c);
        }
    }
    cout<<cc.size()<<"\n";
    // for(auto c_cc : cc){
    //     for(auto vertex : c_cc){
    //         cout<<vertex<<" ";
    //     }
    //     cout<<"\n";
    // }

    return 0;
}