#include<iostream>
using namespace std;
int main()
{
    int n,m,s=0;
    cout<<"enter the size of array\n";
    cin>>m;
    int a[m][m];
    cout<<"enter the elements of array\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
        cin>>a[i][j];

        if(i==j||i+j==m-1)
        {
        s+=a[i][j];

        }
        }
    }
    cout<<s;
}