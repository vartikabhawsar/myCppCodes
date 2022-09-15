#include <iostream>
#include <math.h>
using namespace std;
struct rational
{
    int p;
    int q;
};
rational add(rational r1,rational r2)
{
    rational a;
    a.p = r1.p * r2.q + r2.p * r2.q;
    a.q = r1.q*r2.q;
    return a.p + a.q;
}
int main()
{
   
    rational r1,r2;
    cout << "enter num and denom 1: ";
    cin >> r1.p >> r1.q;
    cout << "enter num and denom 2: ";
    cin >> r2.p << r2.q;
    cout<<add(r1 , r2);
    
    
    return 0;
}