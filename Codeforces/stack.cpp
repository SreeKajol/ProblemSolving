
#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack<char>arr;
    
    arr.push('a');
    arr.push('b');
    arr.push('c');
    arr.push('x');
    arr.push('y');
    arr.push('z');
    
/// this is the LIFO system
    
    while(! arr.empty()){
        //print the top item
        cout<<arr.top()<<endl;
        
        //pop the top item
        arr.pop();
        
    }

    return 0;
}
