//Calculating a^b

#include<bits/stdc++.h>
using namespace std;

const int M = 1e9+7;


//Recursive way
int binaryExponen(int a, int b){
    if(b==0) return 1;

    long long res = binaryExponen(a, b/2);

    if(b&1){
        return (a * (res * res)%M)%M;
    }
    else return (res * res)%M;
}

//Iterative way

int binaryExp(int a, int b){
    //If value of a very big
    a%=M;
    long long ans = 1;
    while(b){
        if(b&1){
            ans = (ans*a)%M;
        }
        a= (a*a)%M;
        b>>=1;
    }
    return ans;
}

int main()
{
    int n,p;
    cin>>n>>p;
    cout<<binaryExponen(n,p)<<"\n";
    cout<<binaryExp(n,p)<<"\n";

    return 0;
}