#include <iostream>
using namespace std;
int si(double p=100,float r=10,int t=2)
{
    return (p*r*t)/100;

}
int si(float r ,int t=10,double p=1000)
{
    return (p*r*t)/100;

}

int si(int t, double p=1000 ,float r=5)

{
    return (p*r*t)/100;
}

int main()
{
    double p;
    float r;
    int t;
    cin>>p>>r>>t;

    cout<<si();
    cout<<si(p)<<" ";
    cout<<si(p,r)<<" ";
    cout<<si(p,r,t)<<" ";
    cout<<si(r)<<" ";
    cout<<si(r,t)<<" ";
    cout<<si(t)<<" ";
    cout<<si(t,p)<<" ";

}