#include <iostream>
using namespace std;
int lcm(int,int);
int main()
{
    int a,b;
    cout << "Enter 2 number: ";
    cin >> a>> b;
    cout <<"lcm is "<< lcm(a,b);
    return 0;
}
int lcm(int a,int b)
{
    int c,max;
    max=( a > b )? a:b;
    for (int i = max; i <= a*b; i+=max)
    {
        if ( i%a == 0 && i%b==0)
        {
            c=i;
            break;
        }
    }
   return c;
}
