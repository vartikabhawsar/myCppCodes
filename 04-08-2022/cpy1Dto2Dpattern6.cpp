#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
    int b[n],a[10][10]={0};
    cout<<"enter 1D array";
    for(int i=0;i<n;i++)
    {
       cin>>b[i];
    }
    for(int j=0;j<n;j++)
    {
        a[0][j]=b[j];
        a[n-1][j]=b[n-1-j];
    }
    for(int i=0;i<n;i++)
    {
        a[i][0]=b[i];
        a[i][n-1]=b[n-1-i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"\n";
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
}
