
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
  list<int>li;
  for(int i; i<n; i++){
      int x;
      cin>>x;
      li.push_back(x);
  }
  list<int>::iterator it;
  for(it=li.begin(); it!=li.end(); it++){
      cout<<*it<<" ";
  }
  for(auto it: li){
      cout<<it<<" ";
  }

    return 0;
}

