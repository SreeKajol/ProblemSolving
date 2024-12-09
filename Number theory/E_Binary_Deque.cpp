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

const int N = 1e6 + 12;

void solve() {
    string s, ss;
    int n;
    cin>>s>>n;
    ss=s;

    int ans=0;
    while(true){
        string s1,s2;
        s1.push_back(s[0]);
        s1.push_back(s[1]);
        s2.push_back(s[4]);
        s2.push_back(s[3]);

        if(s1==s2) ans++;

        
    }
}

signed main() {
    fast;
    int __;
    cin >> __;
    while (__--) {
        solve();
    }
}
