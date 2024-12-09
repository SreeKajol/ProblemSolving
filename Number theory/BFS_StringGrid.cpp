#include <bits/stdc++.h>
using namespace std;

int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {-1, 1, 0, 0, 1, -1, -1, 1};

int n,m;
vector<string>str;
vector<vector<int>>vis;
bool flag=false;

void bfs(int i, int j){
    queue<pair<int,int>>q;

    q.push({i,j});
    vis[i][j]=1;

    while(!q.empty()){
        // auto [x,y]=q.front();
        int x= q.front().first;
        int y= q.front().second;
        q.pop();

        if(str[x][y]=='E'){
            flag=true;
            return;
        }

        for(int i=0; i<4; i++){
            int xx=x+dx[i];
            int yy=y+dy[i];

            if(xx<0 || xx==n)continue;
            if(yy<0 || yy==m)continue;
            if(vis[xx][yy]) continue;
            if(str[xx][yy]=='*')continue;

            q.push({xx,yy});
            vis[xx][yy]=1;

        }

    }
}

void solve()
{
    cin>>n>>m;
    str.resize(n);
    vis.resize(n,vector<int>(m));
    for(auto &i : str)cin>>i;

    int x=-1, y=-1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){     
            if(str[i][j]=='S'){
                x=i, y=j;
                break;
            }
        }
    }
    bfs(x,y);

    if(flag)cout<<"YES\n";
    else cout<<"NO\n";

}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}