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
    ll n, ans=0; 
    cin>>n;
    if(n<3) cout<<n<<"\n";
    else if(n%2==1){
        cout<<n*(n-1)*(n-2)<<"\n";
    }
    else{
        if(n%3!=0){
            cout<<n*(n-1)*(n-3)<<"\n";
        }
        else{
            cout<<(n-1)*(n-2)*(n-3)<<"\n";
        }
    }
    return 0;

}
