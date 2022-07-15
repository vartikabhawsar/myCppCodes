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
        for(int s=i;s<=n-1;s++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i;j++)
        {
            cout<<j;
        }
    }
}