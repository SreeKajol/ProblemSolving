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

const int N = 1e6+12;

char freq[27];

void solve() {
    string s;
    cin>>s;

    for(auto i : s){
        freq[i-'a'+1]++;
    }
    priority_queue<int,vector<int>, greater<int>> pq;

    
    
    
    
}

signed main() {
    fast;
    int __ = 1;
    // cin >> __;
    while (__--) {
        solve();
    }
}
