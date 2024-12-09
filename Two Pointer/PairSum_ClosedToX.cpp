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

void solve(vector<int>arr, int n, int x)
{
        int point1, point2;
        int l=0;
        int r=n-1;
        while(l<r)
        {
                int sum=arr[l]+arr[r];
                int dif= INT_MAX;
                if(abs(sum-x)<dif){
                        point1=l;
                        point2=r;
                        dif=abs(sum-x);
                }
                if(sum<x) l++;
                else r++;
        }
        cout<<arr[point1]<<" "<< arr[point2];
}
int main() {
    FIO;
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
            cin>>arr[i];
    }
    int x;
    cin>>x;
    solve(arr, n, x);
    return 0;
}


