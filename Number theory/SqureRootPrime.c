#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    if(n==1) return false;
    
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
        return true;

}

    int main()
    {
        int t,n;
        cin>>t;
        while(t--){
            cin>>n;
            if(prime(n)==true){
                cout<<"Yes"<<"\n";
            }
            else 
            cout<<"No"<<"\n";
        }

        return 0;
    }
