#include <iostream>
#include <math.h>
using namespace std;
int hcf(int,int);
struct rational
{
    int p;
    int q;
};
rational add(rational r1 ,rational r2)
{
    rational a;
    a.p = r1.p * r2.q + r2.p * r2.q;
    a.q = r1.q*r2.q;
    int k=hcf(a.p,a.q);
    a.p=a.p/k;
    a.q=a.q/k;
    return a; //return a.p + a.q;

}

int hcf(int a,int b)
{
    int min=a<b ? a:b;
    for(int i=min;i>=1;i--)
    if(a%i==0 && b%i==0)
    {
        return i;
    }
}

int checkrational(rational a ,rational b)
{
    int k,l;
    k=hcf(a.p,a.q);
    l=hcf(b.p,b.q);
    if((a.p/k)==(b.p/l)&&(a.q/k)/(b.q/l) )
    {
        return 1;
    }
    return 0;
}
int main()
{
   
    rational r1,r2;
    cout << "enter num and denom 1: ";
    cin >> r1.p >> r1.q;
    cout << "enter num and denom 2: ";
    cin >> r2.p >> r2.q;
    rational k=add(r1 , r2);
    cout<<k.p<<" / "<<k.q;
    if(checkrational(r1,r2)==1)
    {
        cout<<"propotional";
    }
    return 0;
}