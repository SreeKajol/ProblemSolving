#include <bits/stdc++.h>
using namespace std;

vector<string> ans;

void dfs(string &mask, int open, int close)
{
    if (open == 0 && close == 0)
    {
        ans.push_back(mask);
        return;
    }

    if (open > 0)
    {
        mask.push_back('(');
        dfs(mask, open - 1, close);
        mask.pop_back();
    }
    if (close > 0 && open < close)
    {
        mask.push_back(')');
        dfs(mask, open, close - 1);
        mask.pop_back();
    }
}

int main()
{
    int n;
    cin >> n;
    string s="";
    dfs(s, n, n);
    for(auto i : ans){
        cout<<i<<"\n";
    }
}