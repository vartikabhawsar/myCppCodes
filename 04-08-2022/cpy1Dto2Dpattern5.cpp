// 10001
// 02020
// 00300
// 04040
// 50005
// inp =1 2 3 4 5
#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
    int a[n],b[10][10]={0};
    cout<<"enter 1D array";
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==i||j==n-i-1)
            {
                b[i][j]=a[i];
            }
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