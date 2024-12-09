#include<bits/stdc++.h>
using namespace std;
int main()
{
   int **a;
   a=new int*[2];

   for(int i=0; i<2; i++){
    a[i]=new int[2];
   }
   for(int i=0;i<2; i++){
    for(int j=0; j<2; j++){
        cin>>a[i][j];
    }
   }
   for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        cout<<a[i][j]<<" ";
    }
    cout<<"\n";
   }
    return 0;
}