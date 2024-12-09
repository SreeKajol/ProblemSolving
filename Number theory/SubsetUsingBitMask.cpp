#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>subsets;

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; ++i)cin>>arr[i];

    vector<int>help;
    for(int i=0; i<(1<<n); i++){
        for(int j=0; j<32; j++){
            if(((1<<j)&i))help.push_back(arr[j]);
        }

        subsets.push_back(help);
        help.clear();
    }

    for(auto i : subsets){
        for(auto j : i)cout<<j<<" ";
        cout<<"\n";
    }

    return 0;
}