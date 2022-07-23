#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, max=INT_MIN, mult=1, lcm ,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n; i++)
    {   
        cin>>a[i];
        mult=mult*a[i];
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(int j=max;j<=mult; j+=max)
    {
        count=0;
        for(int k=0; k<n; k++)
        {
            if(j%a[k]==0)
            {
                count++;
            }
            lcm=j;
        }
            if(count==n)
            {
               
                cout<<lcm;
            }
        
    }
}