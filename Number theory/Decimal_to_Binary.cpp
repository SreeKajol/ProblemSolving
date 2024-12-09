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
    ll n;
    cin>>n;

//Converting decimal number into a binary number

    // for(int i=30; i>=0; i--){
    //     if((n & (1<<i))>0) cout<<"1";
    //     else cout<<"0";
    // }
    // cout<<"\n";


//We can use bitset<>bs() for a binary number
    bitset<32>bs(n);
    cout<<bs<<"\n";
//Counting how many set present in this bitset
    cout<<bs.count()<<"\n";

//Printing One's complement using bitset
    for(int i=0; i<32; i++) bs[i]=1-bs[i];
    cout<<bs<<"\n";
    return 0;

}
