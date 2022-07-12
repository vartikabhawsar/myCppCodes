#include <iostream>
using namespace std;
int main()
{ 
    int a,b,c;
    cout<<"enter the sides of triangle ";
    cin>>a>>b>>c;
    (a==b&& b==c)?cout<<"equilateral": (a==b||b==c||c==a)? cout<<"isosceles":cout<<"scalene";
}