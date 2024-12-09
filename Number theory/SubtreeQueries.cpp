//      ॐ
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>g;
vector<int>vis;
vector<int>val;
vector<int>SubtreeSum;
vector<int>evenCnt;


void dfs(int vertex, int par = -1){
    SubtreeSum[vertex]+= val[vertex];
    if(vertex%2==0)evenCnt[vertex]++;

    vis[vertex]=true;
    for(auto child : g[vertex]){
        if(vis[child])continue;

        dfs(child, vertex);
        
        SubtreeSum[vertex] += SubtreeSum[child];
        evenCnt[vertex] += evenCnt[child];
    }
}

int main()
{
    int n,m;
    cin>>n;
    m = n-1;
    g.resize(n+1);
    vis.resize(n+1,0);
    val.resize(n+1,0);
    SubtreeSum.resize(n+1,0);
    evenCnt.resize(n+1,0);

    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i=1; i<=n; i++){
        val[i]=i;
    }

    dfs(1);

    for(int i=1; i<=n; i++){
        cout<<SubtreeSum[i]<<" "<<evenCnt[i]<<"\n";
    }
    // int q;
    // cin>>q;
    // while(q--){
    //     int v;
    //     cin>>v;
    //     cout<<SubtreeSum[v-1]<<" "<<evenCnt[v-1]<<"\n";
    // }

    return 0;
}