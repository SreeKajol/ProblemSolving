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

const int N = 1e6+12, mod = 1e9+7;
vector<int>powers(N);
int prime = 31;

void solve() {
    string s,t;
    cin>>s>>t;

    int S = s.size(), T = t.size();

    powers[0] = 1;
    for(int i=1; i<N; i++){
        powers[i] = (powers[i-1]*prime)%mod;
    }
    
    int h_s = 0;
    for(int i=0; i<S; i++){
        h_s = (h_s + (s[i]-'a' + 1)*powers[i])%mod;
    }

    vector<int>h(T+1,0);
    for(int i=0; i<T; i++){
        h[i+1] = (h[i] + (t[i]-'a' + 1)* powers[i])%mod;
    }

    for(int i=0; i+S-1<T; i++){
        int cur_h = (s[i+S]-h[i] + mod) % mod;
        if(cur_h = (h_s * powers[i])%mod){
            cout<<"Found\n";
            return;
        }
    }
    
    cout<<"Not Found\n";
}

signed main() {
    fast;
    int __ = 1;
    // cin >> __;
    while (__--) {
        solve();
    }
}
