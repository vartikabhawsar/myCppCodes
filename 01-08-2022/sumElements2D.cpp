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
        s+=a[i][j];
        }
    }
}