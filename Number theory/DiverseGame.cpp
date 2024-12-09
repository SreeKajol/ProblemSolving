//      ॐ
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+123;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>arr;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            int x;
            cin>>x;
            arr.push_back(x);
        }
    }
    if(n==1 && m==1){
        cout<<"-1\n";
        return;
    }

    int val = arr[0];
    for(int i=0; i<arr.size(); i++){
        arr[i]=arr[i+1];
    }
    arr.back()= val;

    for(int i=0; i<n*m; i++){
        cout<<arr[i]<<" ";
        if((i+1)%m==0 && (i+1)!=(m*n))cout<<"\n";
    }
    cout<<"\n";
}

int main()
{
    int t=1; 
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}