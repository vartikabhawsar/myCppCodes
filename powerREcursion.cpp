#include <iostream>
using namespace std;
int power(int, int);
int main()
{

    int n;
    cin>>n;
    cout<<"enter power";
    int p;
    cin>>p;
    cout<<power(n,p);
}
int power(int n,int p)
{
    int g=1;
    if(p>0)
    {
        g=n*power(n,p-1);

    }
    return g;
}

