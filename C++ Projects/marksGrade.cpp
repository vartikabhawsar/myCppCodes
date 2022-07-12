  #include <iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter the marks";
    cin>>m;
    if(m>100||m<0)
    cout<<"invalid";
    else if(m>=75)
    cout<<"A";
    else if(m>=50)
    cout<<"B";
    else if(m>=25)
    cout<<"c";
    else cout<<"fail";
}