//call by pointers
#include <iostream>
using namespace std;
void incArray(int [], int);
int main()
{
    int n, a[30];
    cout<<"enter the size of array  : ";
    cin>>n;
    cout<<" enter array elements :  ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    incArray(a,n);
    
    for(int i=0;i<n;i++)
    {
        
        cout<<a[i]<<" ";
    }
    return 0;

}
void incArray(int x[],int y)
{
    cout<<"\n my func \n";
    for(int i=0;i<y;i++)
    x[i]=x[i]+5;
    // for(int i=0;i<y;i++)
    // {
    //     cout<<x[i];
    // }
}