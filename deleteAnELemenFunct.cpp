#include <iostream>
using namespace std;
void deletion(int [], int ,int);
int main()
{
    int n, a[30],x;
    cout<<"enter the size of array  : ";
    cin>>n;
    cout<<" enter array elements :  ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element to be deleted";
    cin>>x;
    deletion(a,n,x);
}
void deletion(int a[],int n, int x)
{ 
    int c=0;
    
    
    
    for(int i=0;i<n;i++)
    { 
        if(a[i]==x)
        {
        for(int j=i;j<n-1;j++)
        {
        a[j]=a[j+1];
        } 
        c++;
        i--;
        
        }
    }
    for(int i=0;i<n-c;i++)
    {
        cout<<a[i];
    }
}