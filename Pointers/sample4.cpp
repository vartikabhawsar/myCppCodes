#include <iostream>
using namespace std;
int main()
{
    int a=5;
    int *p=&a;
    int **p1;
    p1=&p;
    cout<<*p<<" ";
    cout<<p<<" ";
    
    
    //for(int i=0;i<5;i++)
    //{
        // a[i]= new int;
        // cin>>*(*(a+i));
        //cout<<a[i]<<" ";
    //}
    
    // cout<<a[0]<<" ";
    // cout<<a[1]<<" ";
    // cout<<*a[0]<<" ";
    // cout<<*a[1]<<" ";
    
}