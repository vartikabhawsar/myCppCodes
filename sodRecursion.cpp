#include <iostream>
using namespace std;
int sod(int);
int main()
{

    int n;
    cin>>n;
    
    cout<<sod(n);
}
int sod(int n)
{
    
    int g=n%10;
    if(n>0)
    {
        n=n/10;
        g=g+sod(n);
       

    }
    return g;
}

