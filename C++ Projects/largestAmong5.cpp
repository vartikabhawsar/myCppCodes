#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e; int x=0;
    cout<<"enter 5 no";
    cin>>a>>b>>c>>d>>e;
    a=x;
    x= (b>x?b:x);
    x= (c>x?c:x);
    x= (d>x?d:x);
    x= (e>x?e:x);
   cout<<"largest is"<<x;
}