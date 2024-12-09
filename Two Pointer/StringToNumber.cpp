//SreeKajol

#include <iostream>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
#define ll long long
#define print(v) for(auto it : v) cout<<it<<"\n"; cout<<endl;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define TC int t; cin>>t; while(t--)
const ll N=1e6+5;
const ll mod=1e9+7;

int main() {
    FIO;
    string str;
    cin>>str;
    ll ans=0;
    for(int i=0; i<str.size(); i++){
        int digit=str[i]- '0';
        ans=ans*10+digit;
        ans=ans%mod;
    }
    cout<<ans<<"\n";
    return 0;
}


