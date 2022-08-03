#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,m,max;
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
    for(int i=0;i<m;i++)
    {
        cout<<"\n";
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
    for(int j=0;j<n;j++)
    {
        max=INT_MIN;
        for(int i=0;i<m;i++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
        cout<<max;
    }
}