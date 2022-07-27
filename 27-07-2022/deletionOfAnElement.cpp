#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    cout<<"enter elements of a \n";
    for(int i=0;i<n;i++)
    {
        
        cin>>a[i];
    }
    cout<<"enter the no to be deleted";
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            for(int j=i;j<n-1;j++)
            {
                a[j]=a[j+1];
               
            }
            n--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}