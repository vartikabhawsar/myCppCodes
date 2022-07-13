#include <iostream>
using namespace std;
int main()
{
    int n,d,m,rev=0;
    cin>>n;
    m=n;
    while(n>0)
    {
        d=n%10;
        rev= rev*10 + d;
        n=n/10;

    }
    if(rev==m)
    cout<<"palindrome";
    else 
    cout<<"not a palindrome";

    }