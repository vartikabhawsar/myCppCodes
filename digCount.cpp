#include <iostream>
using namespace std;
int main()
{
    int d,n,t, count=0;
    cin>>n>>d;
    while(n>0)
{
    t=n%10;
    if(d==t)
    {
        count++;
    }
    n=n/10;
    
}
    cout<<count;
}