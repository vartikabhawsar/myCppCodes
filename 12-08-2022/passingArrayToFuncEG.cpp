#include <iostream>
using namespace std;

    int sum(int[],int);
    
    int main()
    {
        int a[10],n,s; 
        cout<<"\n enter x : ";
        cin>>n;
        cout<<"enter the elements of a : ";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        s=sum(a,n);
        cout<<" sumof all elements of array  : "<<s;
        return 0;
    }
    int sum(int x[],int k)
    {
        int t=0;
        for(int i=0;i<k;i++)
        {
            t=t+x[i];

        }
        return t;
    }