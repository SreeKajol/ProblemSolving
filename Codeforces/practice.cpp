
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,j;
        cin>>n;
        vector<int> arr(n);
        for( i=0; i<n; i++){
            cin>>arr[i];
        }
        int start=0;
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                break;
            }
            start=i;
        }
        int end=0;
        for( i=n-1; i>=0; i--){
            if(arr[i]==0){
                break;
            }
            end=i;
        }
        
        cout<<max(0, end-start)<<"\n";
        
    }
    return 0;
}
