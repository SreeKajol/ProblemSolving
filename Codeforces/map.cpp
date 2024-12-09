#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<string, int >m;
    map<string, int >::iterator it;

    m["Kajol"]= 1;
    m["Sakib"]= 3;
    m.insert(make_pair("kamal", 43));


    for(it=m.begin(); it!=m.end(); ++it){
        cout<<it->first<<" "<<it->second<<endl;
    }


    return 0;
}
