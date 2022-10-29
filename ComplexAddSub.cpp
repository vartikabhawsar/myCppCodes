#include<iostream>
using namespace std;
class complex
{
    float x;//real
    float y;//img
    public:
    void display();
    
    complex (int real,int img) 
    {
        x=real;
        y=img;
    }
    complex operator +(complex ca);
    complex operator -(complex cb);
};
complex complex ::operator +(complex ca)
{
    complex c1;
    c1.x=x+ca.x;
    c1.y=y+ca.y;
    return c1;
}
complex complex ::operator -(complex cb)
{
    complex c5;
    c5.x=x-cb.x;
    c5.y=y-cb.y;
    return c5;
}
 void complex ::  display(void)
{
    cout<<x<<" + "<<y<<"i "<<"\n";
}
int main()
{
    complex c2,c3,c4;
    c2=complex(2,3);
    c3=complex(5,4);
    int a;
    cout<<"enter 1 for add and 2 for sub";
    cin>>a;
    switch(a)
    {
        case 1:
        c4=c2+c3;
       
        break;
        case 2:
        c4=c2-c3;
       
        break;
        default:
        cout<<"invalid";


    }
        c2.display();
      c3.display();
    c4.display();
}