#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int t,sum=0;
    cin>>t;
    while(t--){
      ll n;
      scanf("%lld",&n);
      ll low=1, high=n;
      ll ans;
      while(low<=high){
          ll mid=(high+low)/2;
          if((mid*(mid+1))/2>n){
              high=mid-1;
          }
          else{
              ans=mid;
              low=mid+1;
          }
          
      }
      printf("%lld\n",ans);
      
    }
    return 0;
}
