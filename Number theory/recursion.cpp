#include<bits/stdc++.h>
using namespace std;

int n;
string mask;
vector<string>ans;

void dfs(int open, int close){

    if(mask.size()==2*n){
        
        vector<char>help;
        bool flag=true;
        for(auto i : mask){
            if(i=='('){
                help.push_back('(');
            }
            else if(!help.empty() && i==')'){
                help.pop_back();
            }
            else {
                flag=false;
                break;
            }
            
        }
        if(help.empty() && flag){
            ans.push_back(mask);
        }
        
        return;
    }

    mask.push_back('(');
    dfs(open+1, close);
    mask.pop_back();

    mask.push_back(')');
    dfs(open,close+1);
    mask.pop_back();
}

int main(){
    cin>>n;
    dfs(0,0);

    for(auto i : ans)cout<<i<<"\n";
}