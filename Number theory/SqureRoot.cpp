#include<bits/stdc++.h>
using namespace std;

double eps = 1e-6;

int main()
{
    double n;
    cin>>n;

    auto good = [&](double mid){
        return (mid*mid*mid<n);
    };

    double l=0, r=n;
    while(l+eps<r){
        double mid = l+(r-l)/2;
        if(good(mid)){
            l=mid;
        }
        else r=mid;
    }
    cout<<setprecision(10)<<l<<"\n"<<r<<"\n";
    return 0;
}