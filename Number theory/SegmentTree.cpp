//      ॐ
/*For today, you might be defeated. But what will you become tomorrow?*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) begin(x),end(x)

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {-1, 1, 0, 0, 1, -1, -1, 1};

const int N = 1e6+12;
int a[N], tree[4*N];

void build(int node ,int st, int en){

    if(st==en){
        tree[node] = a[st];
        return;
    }

    int mid = (st+en)/2;

    build(2*node, st, mid);
    build(2*node + 1, mid+1, en);

    tree[node] = tree[2*node] + tree[2*node+1];

}

int query(int node, int st, int en, int l, int r){
    if(st>r or en<l){
        return 0;
    }
    if(st>=l && en<=r){
        return tree[node];
    }

    int mid = (st+en)/2;

    int q1 = query(2*node, st, mid, l, r);
    int q2 = query(2*node+1, mid+1, en, l, r);

    return q1+q2;
}

void update(int node , int st, int en, int idx, int val){
    
    if(st==en){
        a[st] = val;
        tree[node]=val;
        return;
    }

    int mid = (st+en)/2;
    
    if(idx<=mid){
        update(2*node, st, mid, idx, val);
    }
    else{
        update(2*node+1, mid+1, en, idx, val);
    }

    tree[node] = tree[2*node] + tree[2*node+1];
}

void solve() {
    int n,q;
    cin>>n>>q;
    for(int i=0; i<n; i++)cin>>a[i];
    build(1, 0, n-1);

    while(q--){
        int type , l, r;
        cin>>type>>l>>r;

        if(type==1){
            update(1, 0, n-1, l, r);
        }
        else if(type==2){
            int ans = query(1, 0, n-1, l, r-1);

            cout<<ans<<"\n";
        }
        
    }
}

signed main() {
    fast;
    int __ = 1;
    // cin >> __;
    // int c = 0;
    while (__--) {
        // cout<<"Case "<<++c<<":\n";
        solve();
    }
}
