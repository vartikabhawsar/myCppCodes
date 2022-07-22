#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,temp;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n/2; j++)
    {
        temp=a[j];
        a[j]=a[n-j-1];
        a[n-j-1]=temp;
    }
    for(int k=0;k<n;k++)
    {
            cout<<a[k]<<" ";
    }
}
    