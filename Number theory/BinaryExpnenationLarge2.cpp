//If value if  b is very big then

#include<bits/stdc++.h>
using namespace std;
#define int long long
//If value if mod is prime then pi of (mod) = mod-1;
const int M = 1e9+7;

int BinaryEx(int a, int b, int m){
    a%=M;

    int ans= 1;
    while(b){
        if(b&1){
            ans = (ans*a)%m;
        }
        a = (a*a)%m;
        b>>=1;
    } 
    return ans;
}

signed main()
{
    //calculating (a^b^c) 
    int a,b,c;
    cin>>a>>b>>c;
    cout<<BinaryEx(a,BinaryEx(b, c, M-1), M)<<"\n";

    return 0;
}