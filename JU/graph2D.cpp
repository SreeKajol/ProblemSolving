//.... SreeKajol_World
//Graph representation using 2D array

#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

const int N=1e3+10;
int graph[N][N];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int v1,v2;
        cin>>v1>>v2; 
        graph[v1][v2]=1;
        graph[v2][v1]=1;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;

}
