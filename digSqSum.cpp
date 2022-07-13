#include <iostream>
using namespace std;
int main()
{
    int n,d,sum1=0,sum2=0;
    cin>>n;
    while(n>0)
    {
        d=n%10;
        if(d%2==0)
        {
            sum1=sum1+d*d;
        }
        else if(d%2!=0)
        {
            sum2=sum2+ d*d;
        }
        n=n/10;
    }
cout<<sum1-sum2;
}