#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6+123;
int arr[N];

signed main()
{
    int n, k;
    cin>>n>>k;
    for(int i=0; i<n; i++)cin>>arr[i];

    auto good = [&] (int mid){
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=max(0LL, arr[i]-mid);
        }
        return (sum>=k);
    };

    int l=0, r=1e9;
    while(l+1<r){
        int mid= l+(r-l)/2;
        if(good(mid)){
            l=mid;
        }
        else r=mid;
    }
    cout<<l<<"\n";

    return 0;
}