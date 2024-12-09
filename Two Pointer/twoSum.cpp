//SreeKajol_world

#include <iostream>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
#define ll long long
#define print(v) for(auto it : v) cout<<it<<"\n"; cout<<endl;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define TC int t; cin>>t; while(t--)
const ll N=1e6+5;
int val1, val2;
bool solve(vector<int>arr, int n, int x)
{
    int i=0, j=n-1;
    while(i<j)
    {
        int sum=arr[i]+arr[j];
        if(sum==x)
        {
            val1= arr[i];
            val2=arr[j];
            return true;
        }
        if(sum>x) j--;
        else i++;
    }
    return false;
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
    sort(arr.begin(), arr.end());
    int x;
    cin>>x;
    bool ans= solve(arr, n, x);

    if(ans){
        cout<<"YES\n";
        cout<<val1<<" "<<val2<<"\n";
    }
    else cout<<"NO\n";

    return 0;
}




















