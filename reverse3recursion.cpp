#include <iostream>
#include <math.h>
using namespace std;
int reverse(int m)
{

    static int n;
    int y;
    int m=n;
    if (n > 0)
    {
        int c = 0, x;

        while (n > 0)
        {
            n = n / 10;
            c++;
        }

        x = m % 10;
        y = y + x * pow(10, c - 1);
        m = m / 10;
       
        reverse(m);
    }
    return y;
}
int main()
{
    int a;
    cout << "Enter a NUmber: ";
    cin >> a;
    cout << reverse(a);
    return 0;
}