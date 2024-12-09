#include<bits/stdc++.h>
using namespace std;

const int N = 1e6;
vector<bool>is_prime(N+1, true);
vector<int> lp(N,0), hp(N,0);

int main(){
    
    is_prime[0]= is_prime[1] = false;

    for(int i=2; i<=N; i++){
        if(is_prime[i]){
            for(int j=i; j<=N; j+=i){ 
                is_prime[j]=false;

                //Taking highest prime
                hp[j]=i;

                //Taking lowest prime
                if(lp[j]==0){
                    lp[j]=i;
                }
            }
        }
    }

    // for(int i=1; i<=100; i++){
    //     cout<<lp[i]<<" "<<hp[i]<<"\n";
    // }

    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        vector<int>prime_factors;

        //O(log(n)) for query complexity prime factorization
        while(n>1){
            int prime_factor = lp[n];
            while(n % prime_factor==0){
                prime_factors.push_back(prime_factor);
                n/=prime_factor;
            }
        }

        for(auto i : prime_factors){
            cout<<i<<" ";
        }
        cout<<"\n";
    }

    return 0;
}