//m-n armstrong assumin n is bigger
#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int m,n,t,s,u,sum=0,count=0;
    cin>>m>>n;
    for(int i=m; i<=n; i++)
    {
        count=0;
        sum=0;
        s=i;
        t=i;
        while(s>0)
        {
            s=s/10;
            count++;

        }
        while(t>0)
        {
            u=t%10;
            sum=sum + pow(u,count);
            t=t/10;
        }
        if(i==sum)
        {
            cout<<i<<" ";
        }  
      
    }

}
