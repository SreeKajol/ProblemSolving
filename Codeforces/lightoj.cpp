#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s1, s2;
    cin>>s1>> s2;
    int len1=s1.size();
    int len2=s2.size();
    int cnt=0;
    for(int i=0; i<len1-len2+1; i++){
      for(int j=0; j<len2; j++){
        if(s1[i+j]!=s2[j]){
          break;
        }
        if(j==len2-1){
          cnt++;
        }
      }
    }
    cout<<cnt<<"\n";
  }

  return 0;
}
