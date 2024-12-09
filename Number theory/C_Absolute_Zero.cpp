/*For today, you happen to be the defeated. But what will you become tomorrow?*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {-1, 1, 0, 0, 1, -1, -1, 1};

void solve() {
        int n;
        cin>>n;
        vector<int>a(n), ans;
        for(int i=0; i<n; i++)cin>>a[i];
        sort(a.begin(),a.end());

        int cnt=0;
        while(a.back()!=0){
            if(cnt==40){
                cout<<"-1\n";
                return;
            }
            cnt++;

            int mid = (a[0]+a.back())/2;
            ans.push_back(mid);
            for(auto &i : a){
                i=abs(i-mid);
            }
            sort(a.begin(),a.end());
        }

        cout<<ans.size()<<"\n";
        for(auto i : ans)cout<<i<<" ";
        cout<<"\n";
}

signed main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
