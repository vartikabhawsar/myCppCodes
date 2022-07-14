#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,p,m, count=0;
    cin>>n;
    m=n;
    p=n*n;
    while(n>0)
    {
       
        n=n/10;
        count++;
    }
    if(m==p % (int) pow(10,count))   //bec % func works only w integer & pow returns double explicit type conversion
        cout<<"automorphic";         //implicit type cons- store the value of pw in int variable
    else
        cout<<"not automorphic";
}