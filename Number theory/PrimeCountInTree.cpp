//      ॐ
//Using precomputation tecnique
//one part sum = total sum - other part sum
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+123;
vector<int>g[N];
int subtreePrimeVal[N];
int val[N];
int check[N];
bool is_prime[N];

void sieve(){

    is_prime[0] = is_prime[1] = 0;

    for(int i=2; i<=N; i++){
        if(is_prime[i]){
            for(int j= i*2; j<=N; j+=i){
                is_prime[j] = 0;
            }
        }
    }
}

void dfs(int vertex, int par = -1){

    subtreePrimeVal[vertex]+= check[vertex];

    for(auto child : g[vertex]){
        if(child==par)continue;

        dfs(child, vertex);
        subtreePrimeVal[vertex] += subtreePrimeVal[child];
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

    memset(is_prime, 1, sizeof(is_prime));
    sieve();
    for(int i=1; i<=n; i++)cin>>val[i];

    for(int i=1; i<=n; i++){
        if(is_prime[val[i]]){
            check[i] = 1;
        }
    }

    dfs(1);

    int ans=0;
    for(int i=2; i<=n; i++){
        int p1 = subtreePrimeVal[i];
        int p2 = subtreePrimeVal[1] - p1;
        ans= max(ans, p1*p2);
    }
    cout<<ans<<"\n";
    return 0;
}