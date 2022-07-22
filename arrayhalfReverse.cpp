#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,temp;
    cin>>n;
    int a[n];

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

   if(n%2==0)
    {

    for (int j=0 ; j < n/2 ;j++)
    {
        temp=a[j];
        a[j]=a[n/2 + j];
        a[n/2+j]=temp;

    }

    for(int k=0 ; k<n ; k++)
    {
       cout<<" "<<a[k];
    }
    }
     else if(n%2!=0)
     
     { 
         for (int j=0 ; j<=n/2 ;j++)
        {
         temp=a[j];
         a[j]=a[n/2 + j+1];
         a[n/2+j +1 ]=temp;

        }
        for(int k=0 ; k<n ; k++)
        {
      cout<<"\n"<<a[k];
        }

}
}
