#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=65;i<=n+64;i++)
    {
         cout<< "\n";
        for(char j=65;j<=i;j++)
        {
            cout<<j;
        }
    }
}
