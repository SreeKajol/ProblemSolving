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

 int solve(ll n){
     set<ll>st;

        while(n%2==0){
            st.insert(2);
            n/=2;
        }
        for(int i=3; i<=sqrt(n); i+=2){
            while(n%i==0){
               st.insert(i);
               n/=i;
            }
        }
        if(n>2) st.insert(n);

        return st.size();
}

int main()
{
    FIO;

        ll n;
        cin>>n;
        int cnt=0;
       for(ll i=1; i<=n; i++){
             int ans=solve(i);
            if(ans==2) cnt++;
       }
       cout<<cnt<<"\n";
    return 0;

}

