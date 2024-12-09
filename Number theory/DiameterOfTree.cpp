//      ॐ
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<vector<int>>g;
int depth[N];

void dfs(int vertex, int par = -1){

    for(auto child : g[vertex]){
        if(child==par)continue;
        
        depth[child]=depth[vertex]+1;

        dfs(child, vertex);
    }
}

int main()
{
    int n;
    cin>>n;
    g.resize(n+1);

    for(int i=0; i<n-1; i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1);

    int mx_depth=0;
    int mx_v ;
    for(int i=1; i<=n; i++){
        if(mx_depth<depth[i]){
            mx_depth= depth[i];
            mx_v = i;
        }
        depth[i]=0;
    }

    dfs(mx_v);

    int diameter = 0;
    for(int i=1; i<=n; i++){
        if(diameter<depth[i]){
            diameter=depth[i];
        }
    }

    cout<<diameter<<"\n";

    return 0;
}