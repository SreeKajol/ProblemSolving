#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    m["Tetrahedron"] = 4;
    m["Cube"] = 6;
    m["Octahedron"] = 8;
    m["Dodecahedron"] = 12;
    m["Icosahedron"] = 20;
    int n, res=0;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        res+=m[s];
    }
    cout<<res<<"\n";
    return 0;
}
