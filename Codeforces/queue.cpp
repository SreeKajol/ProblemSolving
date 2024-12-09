#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<float> s;
    s.push(1.5);
    s.push(2.5);
    s.push(3.5);
    s.push(4.5);
    s.push(5.5);

    while(! s.empty()){
        cout<<s.front()<<"\n";
        s.pop();

    }


    return 0;
}