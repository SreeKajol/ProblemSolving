#include<bits/stdc++.h>
using namespace std;
#define int long long

// void binary(int n){
//     for(int i=31; i>=0; i--){
//         cout<<((n>>i)&1);
//     }
//     cout<<"\n";
// }

signed main()
{
    int n;
    cin>>n;
    vector<int>masks(n,0);

    for(int i=0; i<n; i++){
        int workers;
        cin>>workers;

        int mask=0;
        for(int j=0; j<workers; j++){
            int day;
            cin>>day;
            mask = (mask | (1<<day));
        }
        masks[i]=mask;
    }

    int person1=-1, person2=-1;
    int mx=0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int same = (masks[i] & masks[j]);
            int mx_bit = __builtin_popcountll(same);
            if(mx_bit>mx){
                mx=mx_bit;
                person1=i;
                person2=j;
            }
        }
    }
    cout<<person1<<" "<<person2<<" : "<<mx<<"\n";

    return 0;
}