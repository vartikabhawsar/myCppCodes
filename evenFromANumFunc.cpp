#include <iostream>
using namespace std;
void even(int);
int main()
{
    int a;
    cout << "Enter 2 number: ";
    cin >> a;
    even(a);
    return 0;
}
void even(int a)
{
    int c=0,b;
    int t=a;
    while(t>0)
    {
        c++;
        t=t/10;
    }
    for(int i=0;i<c;i++)
    {
        b=a%10;
        if(b%2==0)
        cout<<b<<" ";
        a=a/10;
    }
}
