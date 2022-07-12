#include <iostream>
using namespace std;
int main()
{
    int a,x;
    cout << "enter a 2 dig no.";
    cin >>a;
    x=a%10;
    a=a/10;
    cout <<"first digit is "<< a;
    cout <<"\nSecond digit is "<< x;
    return 0;
}