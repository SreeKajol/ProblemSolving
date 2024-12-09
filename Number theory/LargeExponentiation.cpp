#include<bits/stdc++.h>
using namespace std;
#define int long long

//When value of Mod is very big
const int M = 1e18;

int BinaryMultply(int a, int b){
    int ans = 0;
    while(b){
        if(b&1){
            ans = (ans+a)%M;
        }
        a = (a+a)%M;
        b>>=1;
    }
    return ans;
}

int BinaryEx(int a, int b){
    a%=M;
    int ans = 1;
    while(b){
        if(b&1){
            ans = BinaryMultply(ans,a);
        }
        a = BinaryMultply(a,a);
        b>>=1;
    }
    return ans;
}   

signed main()
{
    int a,b;
    cin>>a>>b;
    cout<<BinaryEx(a,b)<<"\n";
    return 0;
}