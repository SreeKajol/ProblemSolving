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

int main() {
    FIO;
    string str;
    ll n;
    cin>>n;
    while(n!=0){
        int rem=n%10;
        char ch=rem+ '0';
        str.push_back(ch);
        n/=10;
    }
    reverse(str.begin(), str.end());
    for(char ch : str){
        cout<<ch<<"\n";
    }
    cout<<str<<"\n";
    return 0;
}


