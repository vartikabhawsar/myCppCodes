#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int m,n,p,s,t,count=0;
    cin>>m>>n;
    for(int i=m; i<=n;i++)
    {
        p=i*i; 
        s=i;
        t=i;
        count=0;
        while(s>0)
        {
            s=s/10;
            count++;
        }
        if( p% (int)pow(10,count) == t )
        {
            cout<< t<<" ";
        }
    }
    return 0;
}