#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void solve(){
    set<pair<char, char>>arr;
    long long n;
    string st;
    cin>>n;
    cin>>st;
    for(int i=0; i<st.size()-1; i++){
        char a,b;
        a=st[i];
        b=st[i+1];
        arr.insert({a,b});
    }
    cout<<arr.size()<<"\n";
    
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
