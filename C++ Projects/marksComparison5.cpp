#include <iostream>
using namespace std;
int main()
{
    int a,b,c1,d,e; int c=0;
    cout<<"enter 5 subject marks";
    cin>>a>>b>>c1>>d>>e;
    c=(a>=33)? c+1 : c;
    c=(b>=33)? c+1 : c;
    c=(c1>=33)? c+1 : c;
    c=(d>=33)? c+1 : c;
    c=(e>=33)? c+1 : c;
   (c==0)? cout<<"failed in all": cout<<"pass in "<<c<<" subjects";
}