#include<iostream>
#include<math.h>
using namespace std;
class calculate
{
    int x;
    int y;
    public:
    void set(int a,int b)
    {
        x=a;
        y=b;
    }
    getx()
    {
        return x;
    }
     gety()
    {
        return y;
    }
};
int main()
{
    int dist,a,b;
    calculate d1,d2;
    d1.set(1,2);
    d2.set(3,4);
    a=(d1.getx()-d2.getx())*(d1.getx()-d2.getx());
    b=(d1.gety()-d2.gety())*(d1.gety()-d2.gety());
    dist=pow(a-b,1/2);
    cout<<dist;
}