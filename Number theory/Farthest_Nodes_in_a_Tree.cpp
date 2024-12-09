//      ॐ
/*For today, you might be defeated. But what will you become tomorrow?*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) begin(x), end(x)

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int N = 1e5+12;

vector<pair<int,int>>g[N];
bool vis[N];
int dist[N];
int mx_dis=0, vertex=-1;

void bfs(int source){
    memset(vis,0,sizeof(vis));
    memset(dist,0,sizeof(dist));


    queue<int>q;
    q.push(source);
    vis[source] = 1;
    

}

void solve() {
    int n;
    cin>>n;

    
    
}

signed main() {
    fast;
    int __ = 1;
    cin >> __;
    while (__--) {
        solve();
    }
}
