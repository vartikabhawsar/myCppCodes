#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"\n";
        for(int k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
            for(int l=i-1; l>=1 ;l--)
            {
                cout<<l;
            }
        
    }
}