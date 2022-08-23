#include <iostream>
using namespace std;
int sos(int );
int happy(int);

int main()
{
    int a;
    cin>>a;
    cout<<happy(a);

}
int sos(int a)
{
   
    int g=a%10;
    if(a>0)
    {

        a=a/10;
        g=g*g+sos(a);
        
    }
    return g;   
}
int happy(int a)
{
    int k;
    k=sos(a);
    if(k>0)
    {
        k=happy(k);
    }
   if(k==1)
   {
    return 1;
   }
   else 
   return 0;
}