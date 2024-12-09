#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void convertBinary(int n){
    for(int i=31; i>=0; i--){
        cout<<((n>>i)&1);
    }
    cout<<"\n";
}

signed main()
{
    fast;
    int n;
    cin>>n;
    convertBinary(n);

    int cnt=0;
    for(int i=0; i<31; i++){
        if(((1<<i)&n))cnt++;
    }
    cout<<cnt<<"\n";
    cout<<__builtin_popcountll(n)<<"\n";

    int i=1;
    convertBinary(n | 1<<i);
    convertBinary((~(1<<i)&n));
    convertBinary(((1<<(i+1))^n));


    return 0;
}