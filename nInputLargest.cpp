#include <iostream>
using namespace std;
int main()
{
    int n,m,max=0;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>m;
        if(m>max)
        {
            max=m;
        }
    }
    cout<<max;
}