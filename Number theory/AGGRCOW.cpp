#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6+123;
int arr[N];

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        for(int i=0; i<n; i++)cin>>arr[i];
        sort(arr,arr+n);

        auto good = [&] (int mid){
            int lastPos=arr[0];
            int cnt=k-1;

            for(int i=1; i<n; i++){
                if(arr[i]-lastPos>=mid){
                    cnt--;
                    lastPos=arr[i];
                }
                if(cnt==0) break;
            }

            return (cnt==0); 
        };

        int l=0, r=1e9;
        while(l+1<r){
            int mid = l+(r-l)/2;
            if(good(mid)){
                l=mid;
            }
            else r=mid;
        }
        cout<<l<<"\n";
    }
    return 0;
}