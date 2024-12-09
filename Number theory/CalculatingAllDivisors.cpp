#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int>divisors[N];

int main()
{
    for(int i=1; i<=N; i++){
        for(int j=i; j<=N; j+=i){
            divisors[j].push_back(i);
        }
    }

    for(int i=1; i<=10; i++){
        for(auto j : divisors[i]){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    return 0;
}