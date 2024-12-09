#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
  vector<pair<string,int>>v;
  vector<pair<string,int>>:: iterator it;

  v.push_back(make_pair("kajol", 01));
  v.push_back(make_pair("kamal", 03));
  v.push_back(make_pair("koriml", 02));
  v.push_back(make_pair("kolil", 9));

  for(it =v.begin(); it!=v.end(); ++it){
    cout<<it->first<< " "<<it->second<< "\n";
  }

    return 0;
}
