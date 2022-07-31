#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size\n";
    cin>>n;
    int a[n];
    int lcm=a[0];
    cout<<"enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=lcm;j<=lcm*a[i];j++)
        {
            if(j%lcm==0 && j%a[i]==0)
            {
                lcm=j;
                break;
            }
        }

    }
    cout<<lcm;
}