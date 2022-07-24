#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, min=INT_MAX, mult=1,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(min>a[i])
        {
            min=a[i];
        }
    }
    for(int j=min;j>=1;j--)
    {
        count=0;
            for(int k=0;k<n;k++)
            {
                if(a[k]%j==0)
                {
                    count++;
                }
            }
        if(count==n)
        {
            cout<<j;  
            break;
        }
        
    }
    return 0;
}