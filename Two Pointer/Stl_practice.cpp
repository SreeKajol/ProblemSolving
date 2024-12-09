//.... SreeKajol_World

#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
#define ll long long
#define scan(v) for(auto &it : v) cin>>it;
#define print(v) for(auto it : v) cout<<it<<"\n"; cout<<endl;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define TC int t; cin>>t; while(t--)

int main()
{
    FIO;
    int n; cin>>n;
    ll mx=INT_MIN;
    for(int i=0; i<n; i++){
        ll x;
        cin>>x;
        mx=max(mx,x);
    }


    return 0;
}
