#include <iostream>
using namespace std;

struct Complex
{
    double a; // real part
    double b; // imaginary part
} c1,c2,p;
int main()
{
    cout<<"enter the real part of 1st ";
    cin>>c1.a;
    cout<<"enter the imag. part of 1st ";
    cin>>c1.b;
    
    cout<<"enter the real part of 2st ";
    cin>>c2.a;
    cout<<"enter the imag. part of 2st ";
    cin>>c2.b;
    p.a=c1.a*c2.a- c1.b*c2.b ;
    p.b=c1.b*c2.a+c1.a*c2.b;
    cout<<p.a<<" + ("<<p.b<<"i)";
}

