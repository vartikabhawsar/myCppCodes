#include<iostream>
using namespace std;
int main()
{
    int n,m,s=0;
    cout<<"enter the size of array\n";
    cin>>m>>n;
    int a[m][n];
    cout<<"enter the elements of array\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        cin>>a[i][j];
        }
    }
    for(int i=0;i<m ;i++)
    {
        cout<<"\n";
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i==0||i==m-1)||(j==0||j==n-1))
            s=s+a[i][j];
        }
    }
    cout<<s;
}