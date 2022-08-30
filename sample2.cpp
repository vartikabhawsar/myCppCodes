#include <iostream>
using namespace std;
int main()
{
    int n;
    
    cin>>n;

    int a[n];
    a++;
    cout<<a;
    for(int i=0;i<n;i++)
    {
        cin>>*(a+i);
        cout<<"\n";
        cout<<(a+i)<<" ";
        cout<<"\n";
        cout<<i[a];
    }
    
}