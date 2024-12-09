//      ॐ
//Using precomputation tecnique
//one part sum = total sum - other part sum
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+123;
vector<int>g[N];
int subtreeSum[N];
int val[N];

void dfs(int vertex, int par = -1){

    subtreeSum[vertex]+= val[vertex];

    for(auto child : g[vertex]){
        if(child==par)continue;

        dfs(child, vertex);
        subtreeSum[vertex] += subtreeSum[child];
    }
}

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n-1; i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i=1; i<=n; i++){
        cin>>val[i];
    }

    dfs(1);

    int ans=0;
    for(int i=2 ; i<=n; i++){
        int part1 = subtreeSum[i];
        int part2 = subtreeSum[1] - part1;
        ans = max(ans, part1*part2);
    }
    cout<<ans<<"\n";

    return 0;
}