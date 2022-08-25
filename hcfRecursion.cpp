#include <iostream>
using namespace std;
int hcf(int, int );
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<hcf(n,m);
}
int hcf(int a, int b)
{
    int n;
    if(b%a!=0)
    {
        n=b%a;
        return hcf(n,a);
    }
    return a;
}