//      ॐ
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+123;
vector<int>g[N];
int vis[N];
int level[N];

void bfs(int source){
    queue<int>q;
    q.push(source);
    vis[source]=1;
    level[source]=0;

    while(!q.empty()){
        int p = q.front();
        q.pop();

        cout<<p<<" "<<level[p]<<"\n";
        for(auto child : g[p]){
            if(vis[child]) continue;
            
                q.push(child);
                vis[child]=1;
                level[child]=level[p]+1;
        }
    }
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

    bfs(1);

    return 0;
}