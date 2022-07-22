#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int m,n,count=0;
    cin>>m>>n;
    int a[m], b[n];
    if(m==n)
    {   
        cout<<"enter the elements of first a then b ";  //or take 2 loops for both's input 
    for(int i=0;i<n;i++)
    {
        
        cin>>a[i];
        cin>>b[i];
        if(a[i]==b[i])
        count++;
    }
    if (count==m)
    {
        cout<<" equal";
    }
    }
    else 
        cout<<"unequal";
    
}