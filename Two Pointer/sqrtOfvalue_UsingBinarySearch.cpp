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
double eps = 1e-9;

double multiply(double mid, int n)
{
        double ans=1;
        for(int i=0; i<n; i++){
                ans*=mid;
        }
        return ans;
}

int main()
{
    double x;
    int n;
    cin>>x>>n;
    double lo=1, hi=x, mid;
    while(hi-lo > eps)
    {
        mid=(lo+hi)/2;
        if(multiply(mid, n)<x)
        {
            lo=mid;
        }
        else hi=mid;
    }
    cout<<setprecision(10)<<lo<<"\n";
//    cout<<setprecision(10)<<hi<<"\n";
//    cout<<pow(x,1.0/2);
    return 0;
}


