//.... SreeKajol_World

#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;


int main()
{
    int n;
    cin >> n;
    bool mat[n][n];
    memset(mat, 0, sizeof(mat));
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        mat[u][v] = 1;
        mat[v][u] = 1;
    }
    int q;
    cin >> q;
    for(int i=1; i<=q; i++){
        int u, v;
        cin >> u >> v;
        if (mat[u][v] == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
