//      ॐ
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+123;
vector<int>g[N];
int parent[N];

void dfs(int vertex, int par = -1){
    parent[vertex] = par;

    for(auto child : g[vertex]){
        if(child==par)continue;

        dfs(child, vertex);
    }
}

vector<int> path(int v){
    vector<int>help;

    while(v!=-1){
        help.push_back(v);
        v=parent[v];
    }
    reverse(help.begin(),help.end());
    return help;
}

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n-1; i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1);


    int x,y;
    cin>>x>>y;
    vector<int>path_x = path(x);
    vector<int>path_y = path(y);

    for(int i=0; i<path_x.size(); i++){
        cout<<path_x[i]<<" ";
    }
    cout<<"\n";
    
    for(int i=0; i<path_y.size(); i++){
        cout<<path_y[i]<<" ";
    }
    cout<<"\n";

    int lca;
    for(int i=0; i<min(path_x.size(),path_y.size()); i++){
        if(path_x[i]==path_y[i]) lca= path_x[i];
    }

    cout<<lca<<"\n";

    return 0;
}