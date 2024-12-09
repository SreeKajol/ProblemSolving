//      ॐ
/*For today, you might be defeated. But what will you become tomorrow?*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) begin(x), end(x)

const int N = 1e6+12;

int parent[N];
int size[N];

void make(int v){
    parent[v] = v;
    size[v] = 1;
}
int find(int v){
    if(parent[v]==v) return v;
    return parent[v] = find(parent[v]);
}

void union_sets(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) {
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}

void solve() {
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        make(i);
    }

    for(int i=1; i<=m; i++){
        int u,v;
        cin>>u>>v;
        union_sets(u,v);
    }
    
    int connected_componets=0;

    for(int i=1; i<=n; i++){
        if(find(i)==i) connected_componets++;
    }
    cout<<connected_componets<<"\n";
}

signed main() {
    solve();
}
