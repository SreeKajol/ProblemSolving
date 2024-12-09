//.... SreeKajol_World

#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
#define ll long long
#define scan(v) for(auto &it : v) cin>>it;
#define print(v) for(auto it : v) cout<<it<<"\n"; cout<<endl;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define TC int t; cin>>t; while(t--)

int main()
{
    FIO;
    int m,n,k;
    cin>>m>>n>>k;
    char arr[m][n];
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin>>arr[i][j];
        }
    }
    for(int v=1; v<=k; v++){
        for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            for(int r=1; r<=k; r++){
                cout<<arr[i][j];
            }
        }
        cout<<"\n";
    }
    }
    return 0;

}

