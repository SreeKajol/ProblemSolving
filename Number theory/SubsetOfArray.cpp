#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
int arr[N];
vector<vector<int>>ans;
vector<int>mask;

void dfs(int n){
    if(n<0){
        ans.push_back(mask);
        return;
    }

    dfs(n-1);

    mask.push_back(arr[n]);
    dfs(n-1);
    mask.pop_back();
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)cin>>arr[i];
    dfs(n-1);
    for(auto i : ans){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}