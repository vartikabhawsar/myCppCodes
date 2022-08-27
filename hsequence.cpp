#include <iostream>
using namespace std;
void hs(int);
int main()
{
    int n;
    cin>>n;
    hs(n);
}
void hs(int n)
{
    
    if(n>1)
    {
        if(n%2==0)
        {
        n=n/2;
        cout<<n<<" ";
        hs(n);
        }
        else if(n%2!=0)
        {
            n=3*n+1;
            cout<<n<<" ";
            hs(n);
        }
       
}
}