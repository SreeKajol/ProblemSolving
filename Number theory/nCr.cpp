/*For today, you happen to be the defeated. But what will you become tomorrow?*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {-1, 1, 0, 0, 1, -1, -1, 1};

const int N = 1e6+12;
const int M = 1e9+7;
int fact[N];

//nCr = n! /((n-r)! * r!)
void factorial(){
    fact[0]= 1 ;
    for(int i=1; i<N; i++){
        fact[i]=(fact[i-1] * i) % M;
    }
}

int binexp(int a, int b, int m){
    int result = 1;
    while(b>0){
        if(b&1){
            result = (result * a) % m;
        }
        a = (a * a) % m;
        b>>=1;
    }
    return result; 
}

int InverseMod(int a){
    return binexp(a, M-2, M);
}

int nCr(int n,int r)
{
    if(r==0) return 1;
    if(r>n) return 0;
    return(fact[n] * InverseMod((fact[r]*fact[n-r]) % M)) %M;
}
void solve()
{
    factorial();

    int q;
    cin>>q;
    while(q--){
        int n,k;
        cin>>n>>k;
        cout<< nCr(n,k)<<"\n";
    }
    
}
signed main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}