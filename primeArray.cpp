#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   
    for(int j=0;j<n;j++)
    {
        count=0;
        for(int i=2; i<=a[j]/2;i++)
        {
            if(a[j]%i==0)
            {
                count++;
            }
        }
            if(count==0)
            {
                cout<<a[j];
            }
        
    }
}