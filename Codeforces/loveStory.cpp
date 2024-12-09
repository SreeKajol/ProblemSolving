
#include <iostream>
#include<string>

using namespace std;

void solve(){
    string s="codeforces";
    string str;
    cin>>str;
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=str[i]){
            cnt++;
        }
    }
    cout<<cnt<<"\n";
}

int main()
{
    int t; 
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
