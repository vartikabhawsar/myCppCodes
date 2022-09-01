#include <iostream>
using namespace std;
int main()
{
    // const int a =10;
    // const int*p=&a;    
    // p++;
    // cout<<*p;
    // (*p)++;//error bec a is const and cannot be changed bec p is pointer to a constant
    
    int a=10;
    int * const p=&a;
    (*p)++;
    cout<<*p;
    //p++;

}