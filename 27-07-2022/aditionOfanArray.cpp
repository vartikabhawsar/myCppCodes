//lessEfficientWay
#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int a[n+1];
    cout<<"enter elements of a \n";
    for(int i=0;i<n;i++)
    {
        
        cin>>a[i];
    }
    cout<<"enter the no. t be added";
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(a[i]>k)
        {
            a[n]=a[i];
            a[i]=k;
            k=a[n];
        }
    }
    for(int i=0;i<n+1;i++)
    {
        cout<<a[i];
    }
    }