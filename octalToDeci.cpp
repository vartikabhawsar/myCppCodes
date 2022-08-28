#include <iostream>
#include<math.h>
using namespace std;
int octal(int);
int main()
{
    int n;
    cin>>n;
   
    cout<<octal(n);
    return 0;
}
int octal(int n)
{
    static int deci;
    static int c=0;
    int t;
    if(n>0)
    {
    t=n%10;
    int p=pow(8,c);
    deci=deci + p*t;
    c++;
    octal(n/10);
    }
    return deci;
}

