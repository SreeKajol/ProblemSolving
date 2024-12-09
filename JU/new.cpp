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

void seive(int n){
    vector<bool>flag(n+2, false);
    for(int i=2; i<=n; i++){
        if(flag[i]==false){
            for(int j=i*i; j<=n; j+=i){
                flag[j]=true;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(flag[i]==false){
            cout<<i<<" ";
        }
    }
}

int main()
{
    FIO;
    ll n;
    cin>>n;
    seive(n);
    return 0;

}
