#include <bits/stdc++.h>
using namespace std;
#define int long long

// Directions for up, down, left, right
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int n, m;
vector<vector<int>> grid, vis;
int sum, mx;

void dfs(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m) return; 
    if (grid[i][j] == 0 || vis[i][j]) return;      

    vis[i][j] = 1;              
    sum += grid[i][j];        

    // Explore all four directions
    for (int k = 0; k < 4; k++) {
        int ni = i + dx[k];
        int nj = j + dy[k];
        dfs(ni, nj);
    }
}

void solve() {
    cin >> n >> m;

    grid.assign(n, vector<int>(m));
    vis.assign(n, vector<int>(m, 0));
    mx = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] > 0 && !vis[i][j]) { 
                sum = 0;
                dfs(i, j);      
                mx = max(mx, sum); 
            }
        }
    }

    cout << mx << "\n"; 
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 
    while (t--) solve();
    return 0;
}
