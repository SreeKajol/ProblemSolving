//      ॐ
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>g;
vector<int>vis;
int sum=0;
int des;
int temp;

void dfs(int vertex, int par = -1){
    if(vertex==des)sum+=vertex;
    for(auto child : g[vertex]){
        if(child==par)continue;
        if(vertex==temp) {
            sum+=child;
        }

        dfs(child, vertex);
        
    }
    if(vertex==des)return;
}

int main()
{
    int n;
    cin>>n;
    g.resize(n+1);
    vis.resize(n+1,0);

    for(int i=0; i<n-1; i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    cin>>des;
    temp = des;

    dfs(1);

    cout<<sum<<"\n";

    return 0;
}