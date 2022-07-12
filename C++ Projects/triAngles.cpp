#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 3 angles";
    cin>>a>>b>>c;
    (a+b+c!=180||a<=0|| b<=0 || c<= 0)? cout<< "not possible": (a==90||b==90||c==90)? cout<<"right": (a>90|| b>90||c>90)?cout <<"obtuse":cout<<"acute";
    return 0;


}