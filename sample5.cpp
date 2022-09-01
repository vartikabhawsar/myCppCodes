#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int *p;
     p=&a;
    // *p++;
    // cout<<*p<<" "<<p<<" ";
    // p=&a;
    // (*p)++;
    // cout<<*p<<" "<<p<<" ";
    // ++*p;
    // cout<<*p<<" "<<p<<" ";
    // *++p;
    // cout<<*p<<" "<<p<<" ";
    int b;
    b=(*p)++;
    cout<<b<<" "<<" "<< a<<" "<<*p;
}