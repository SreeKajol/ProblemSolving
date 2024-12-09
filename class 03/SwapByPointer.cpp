#include<bits/stdc++.h>
using namespace std;

void swap(int *c,int *d){
    int temp;
    temp=*c;
    *c=*d;
    *d=temp;
    cout<<*c<<" "<<*d<<endl;
}

int main()
{
 int a,b;
 cin>>a>>b;
 swap(&a,&b);

    return 0;
}