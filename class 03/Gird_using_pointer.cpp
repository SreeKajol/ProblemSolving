#include<bits/stdc++.h>
using namespace std;
int main()
{
    int **a;
    a=new int*[5];
    for(int i=0; i<5; i++){
        a[i]=new int[i+1];
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<i; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<i; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
