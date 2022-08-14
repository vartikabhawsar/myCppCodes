#include <iostream>
using namespace std;
void fibonacci(int);
int main()
{
    int a;
    cout << "Enter the number: ";
    cin >> a;
    fibonacci(a);
    return 0;
}
void fibonacci(int n)
{
    int a=0,b=1,c;
    cout<< a <<" "<< b <<" ";
    for (int i = 0; i < n-2; i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
  
}
