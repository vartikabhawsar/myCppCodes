#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"\n enter a ";
    cin>>a;
    int * b= &a;
    cout<<"\n value = "<<a; // a ki value
    cout<<"\n address = "<<&a;// addres s of a
    cout<<"\n " <<b; // address of a stored in b pointer (bec normal int variable cant store address)
    cout<<"\n "<<*b; //value at the address of a which is stored in b ie input
     (*b)++; // increment of value at address of a stored in b
     cout<<"\n "<<a; //incremented value
     cout<<"\n address of b "<<&b; //address of b 
     
     b++; //address of a is incremented in terms of int/float/double i.e 4 bytes etc, now b does not hold a's address
     cout<<"\n address of b "<<b;//address is changed
     cout<<" \nvalue at "<<*b; //therefore garbage value bec we dont know value at the incremented address bec its not pointing a anymore
    return 0;
    }