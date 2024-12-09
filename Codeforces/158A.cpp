#include <iostream>

using namespace std;

int main()
{
    int a,b,count=0;
   cin>>a>>b;
   int arr[a+1];
   for(int i=0; i<a; i++){
       cin>>arr[i];
       if(arr[i]>b){
           count++;
       }
   }
   
    cout<<count<<"\n";
    
    return 0;
}
