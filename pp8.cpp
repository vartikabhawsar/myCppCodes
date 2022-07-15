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
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
    }
        for(int k=1;k<=n-1;k++)
        {
            cout<<"\n";
            for( int l=1;l<=n-k;l++)
            {
                cout<<l;
            }

        }
    
}