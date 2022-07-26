#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n], min,pos;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        min=a[i];
        pos=i;
        for(int j=i+1;j<n;j++ )
        {
            if(min> a[j])
            {
                min=a[j];
                pos=j;
            }
        }
        a[pos]=a[i];
        a[i]=min;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
