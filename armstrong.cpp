#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,m,l,count=0,sum=0,t;
    cin>>n;
    m=n;
    l=n;
    while(n>0)
    {
        t=n%10;
        count++;
        n=n/10;
    }
    while(m>0)
    {
        t=m%10;
        sum=sum+pow(t,count);
        m=m/10;

    }
    if(l==sum)
    {
        cout<<"armstrong";
    }
    else
    cout<<"not armstrong" ;
}