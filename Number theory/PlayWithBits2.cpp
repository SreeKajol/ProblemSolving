#include<bits/stdc++.h>
using namespace std;

void Binary(int n){
    for(int i=10; i>=0; i--){
        cout<<((n>>i)&1);
    }
}

int main()
{
    int n;
    cin>>n;
    Binary((1<<5)); // 1 ke left shift kore
    cout<<"\n";
    Binary((5<<1)); // 5 ke left shift kore 
    cout<<"\n";

    if(n&1)cout<<"Odd\n";
    else cout<<"Even\n";

    cout<<(n<<1)<<"\n";
    cout<<(n>>1)<<"\n";

    cout<<(char)('A'| ' ')<<"\n";
    cout<<(char)('a' & '_')<<"\n";

    Binary(59);
    cout<<"\n";

    //msb clear 
    int i=4; 
    n=59;
    Binary(~((1<<(i+1))-1)&n);
    cout<<"\n";

    //lsb clear
    Binary(((1<<i)-1)&n);
    cout<<"\n";
    
    //Check 2^power or not 
    n=16;
    if((n&(n-1))==0){
        cout<<"YES, It's a power of 2\n";
    }
    else cout<<"NO\n";

    return 0;
}