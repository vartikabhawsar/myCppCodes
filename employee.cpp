#include <iostream>
using namespace std;
class employee
{
    char name[20];
    float eno;
    float basic;
    float hra;
    float cca;
    float da;
    float pf;
    float netsal;
    public:
    void input()
    {
        cout<<"enter name eno and basic ";
        cin>>name;
        cin>>eno;
        cin>>basic;
    }
    void calculate()
    {
        hra=(40.0/100)*basic;
        da=(35.0/100)*basic;
        cca=(5.0/100)*basic;
        pf=(12.0/100)*basic;
        netsal = basic + hra + da + cca - pf;

    }
    void output()
    {
        
        cout<<name<<" ";
        cout<<eno<<" ";
        cout<<netsal<<" ";

    }

};
int main()
{
    employee e1;
    e1.input();
    e1.calculate();
    e1.output();
}