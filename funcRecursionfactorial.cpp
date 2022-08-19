#include <iostream>
using namespace std;
int factorial(int);
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
}
int factorial(int n)
{
    int g=1;
    if(n>1)
    {
        g=n*factorial(n-1);

    }
    return g;
}

