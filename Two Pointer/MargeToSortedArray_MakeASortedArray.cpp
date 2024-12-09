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

int main()
{
    FIO;
    int n,m, min_size;
    cin>>n>>m;
    vector<int>a(n), b(m), final_arr;
    //final_arr[n+m];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }

    int first=0, second=0;
    // int k=0;
    while(first<n &&  second <m)
    {
        if(a[first]>=b[second])
        {
            final_arr.push_back(b[second]);
            second++;
            //final_arr[k++]=b[second++];
        }
        else
        {
            final_arr.push_back(a[first]);
            first++;
            //final_arr[k++]=a[first++];
        }
    }
    while(first<n)
    {
        final_arr.push_back(a[first]);
        first++;
        //final_arr[k++]=a[first++];
    }
    while(second<m)
    {
        final_arr.push_back(b[second]);
        second++;
        //final_arr[k++]=a[second++];
    }

    for(auto it : final_arr) cout<<it<<" ";

    cout<<"\n";

    return 0;
}


