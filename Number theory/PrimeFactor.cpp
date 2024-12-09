#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>primefactor;

    //O(sqrt(n)) complexity
    for(int i=2; i*i<=n; i++){
        while(n%i==0){
            primefactor.push_back(i);
            n/=i;
        }
    }
    if(n>1)primefactor.push_back(n);

    for(auto i : primefactor)cout<<i<<" ";
    cout<<"\n";

    return 0;
}