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
    ll n, d=0;
    while(cin>>n){
        d=0;
        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                d=d+ __gcd(i,j);
            }
        }
        cout<<d<<"\n";
    }
    return 0;

}
