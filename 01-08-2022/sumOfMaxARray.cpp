#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n,max=INT_MIN,sum=0;
    cout<<"enter the size of array\n";
    cin>>n;
    int a[n];
    cout<<"enter the elements of array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=a[j];

            if(max<sum)
            {
                max=sum;
            }
        }
    }
    cout<<max;
}