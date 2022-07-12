#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int n; float sum=0;
    cin>>n;
    for(float i=1;i<=n;i++)
    {
        sum=sum+1/i;   //sum=1.0/i when i is in int
    }
    cout<<sum;
}
