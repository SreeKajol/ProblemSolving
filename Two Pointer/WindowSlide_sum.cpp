//SreeKajol
//window sliding technique for summation

#include <iostream>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
#define ll long long
#define print(v) for(auto it : v) cout<<it<<"\n"; cout<<endl;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define TC int t; cin>>t; while(t--)
const ll N=1e6+5;

int solve(vector<int>arr, int n, int x)
{
    int cnt=0;
    int sum=arr[0]+arr[1]+arr[2];
    if(sum==x) cnt++;
    for(int i=3; i<n; i++)
    {
        sum=(sum+arr[i])-arr[i-3];
        if(sum==x)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
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
    int ans = solve(arr, n, x);
    cout<<ans<<"\n";
    return 0;
}


