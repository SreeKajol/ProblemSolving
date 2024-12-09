//      ॐ
#include<bits/stdc++.h>
using namespace std;

int dx[]= {0, 0, -1, 1};
int dy[]= {1, -1, 0, 0};

vector<vector<int>>g;
vector<pair<int,int>>vis;
int n ,m , initialColor, newColor;

void dfs(int x, int y){
    if(x<0 or x>=n)return;
    if(y<0 or y>=m)return;
    if(g[x][y]!=initialColor)return;

    g[x][y]=newColor;

    for(int i=0; i<4; ++i){
        int xx = x + dx[i];
        int yy = y + dy[i];

        dfs(xx,yy);
    }
}

int main()
{
    cin>>n>>m;
    g.resize(n, vector<int>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>g[i][j];
        }
    }

    int x, y;
    cin>>x>>y>>newColor;
    initialColor = g[x][y];

    if(initialColor!=newColor)
        dfs(x,y);

    for(auto i : g){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    return 0;
}