#include <iostream>
using namespace std;
int main()
{
   int n,j;
   cin>>n;
    int a[n],b[10][10]={0};
    cout<<"enter 1D array";
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            b[i][j]=a[j];
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<"\n";
        for(int j=0;j<n;j++)
        {
            cout<<b[i][j]<<" ";
        }
    }
}