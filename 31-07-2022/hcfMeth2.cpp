#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size\n";
    cin>>n;
    int a[n];
    
    cout<<"enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int hcf=a[0];
    for(int i=1;i<n;i++)
    {
        for(int j=hcf;j>=1;j--)
        {
            if(hcf%j==0 && a[i]%j==0)
            {
                hcf=j;
                break;
            }
        }

    }
    cout<<hcf;
}