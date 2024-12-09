//      ॐ
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>g;
vector<int>depth, height;


void dfs(int vertex, int par = -1){

    for(auto child : g[vertex]){
        if(child==par)continue;

        //Niche jete jete
        depth[child]=depth[vertex]+1;
        dfs(child , vertex);
        //Upore aste aste
        height[vertex]= max(height[vertex], height[child]+1);
    }
}

int main()
{
    int n,m;
    cin>>n;
    m=n-1;
    g.resize(n);
    depth.resize(n,0);
    height.resize(n,0);

    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        x--, y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(0);

    for(int i=0; i<n; i++){
        cout<<depth[i]<<" "<<height[i]<<"\n";
    }

    return 0;
}