#include <iostream>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    int a[n], b[m],c[m+n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }

    for(int k=0;k<n;k++)
    {
       
        if(a[k]%2==0);
        {
            c[count]=a[k];
            count++;
        }
    }
    for(int k=0;k<m;k++)
    {
        
            if(b[k]%2==0)
            {
                c[count]=b[k];
                count++;
            }
    }
    
    for(int k=0;k<n;k++)
    {
       
            if(a[k]%2!=0)
            {
                c[count]=a[k];
                count++;
            }
    }
    
    for(int k=0;k<m;k++)
    {
            if(b[k]%2!=0)
            {
                c[count]=b[k];
                count++;
            }
    }
    

    for(int l=0;l<m+n;l++)
    {
        cout<<c[l]<<" ";
    }
}
    