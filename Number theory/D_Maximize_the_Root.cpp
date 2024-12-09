#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {-1, 1, 0, 0, 1, -1, -1, 1};

vector<int>a;
vector<vector<int>>g;
vector<bool>vis;

int dfs(int vertex, int par = -1){
    vis[vertex] = true;

    int mini = 1e9;
    for(auto child : g[vertex]){
        if(vis[child]) continue;
        mini = min (mini, dfs(child, vertex));
    }
    if(vertex==0){
        return mini + a[0];
    }
    if(mini==1e9) return a[vertex];
    if(a[vertex]>=mini) return mini;
    else return (a[vertex]+mini)/2;
}

void solve() {
    int n;
    cin>>n;

    //For each testcase 
    a.clear();
    g.clear();
    vis.clear();

    a.resize(n);
    g.resize(n);
    vis.resize(n,0);

    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=1; i<n; i++){
        int p;
        cin>>p;
        p--;
        g[p].push_back(i);
    }

    cout<<dfs(0)<<"\n";
}

signed main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
