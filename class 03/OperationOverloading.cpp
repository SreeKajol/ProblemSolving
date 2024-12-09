#include<bits/stdc++.h>
using namespace std;

class compelx{
    public:
    int real, imaginary;
    
    compelx operator + (compelx const &obj){
        complex temp;
        temp.real=real+obj.real;
        temp.imaginary=imaginary+obj.real;

        return temp;
    }
};
int main()
{ 
 complex a,b;
 a.real=5;
 a.imaginary=3;
 b.real=2;
 b.imaginary=4;

a=a+b;
cout<<a.real<<"+"<<a.imaginary<<"i"<<"\n";
    return 0;
}