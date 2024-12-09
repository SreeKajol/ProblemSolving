//      ॐ
/*For today, you happen to be the defeated. But what will you become tomorrow?*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {-1, 1, 0, 0, 1, -1, -1, 1};

vector<vector<int>>g;
vector<bool>check;
set<int>st;
int ans=0;

void dfs(int vertex, int par = -1) {

    check[vertex] = (st.count(vertex) > 0);

    for (auto child : g[vertex]) {
        if (child == par) continue; 

        dfs(child, vertex); 

        check[vertex] = check[vertex] | check[child];
    }
}

void solve()
{
    int n,k;
    cin>>n>>k;
    g.resize(n);
    check.assign(n,false);
    
    for(int i=0; i<n-1; i++){
        int x,y;
        cin>>x>>y;
        x--, y--;
        g[x].push_back(y);
        g[y].push_back(x);

    }

    for(int i=0; i<k; i++){
        int x;
        cin>>x;
        x--;
        st.insert(x);
    }

    dfs(*st.begin());

    for(int i=0; i<n; i++){
        if(check[i]>0)ans++;
    }
    cout<<ans<<"\n";
}

signed main()
{
    fast;
    int __ = 1;
    // cin >> __;
    while (__--)
    {
        solve();
    }
}
