#include <iostream>
#define mul(a,b) a*b
#define sq(x) (x)*(x);
#define get(a) #a
#define f(a,b) for(int i=a;i<b;i++)
#define Wh(A,B) while(A<B) \
        {                  \
          cout<<"\nHello"; \
          A=A+1; \
        } 
using namespace std;

int main() 
{
  int c=10,d=12;
  Wh(c,d)
  f(c,d)
  {    cout<<"vartika"<<"\n";}
  cout<<mul(c+5,d+2)<<"\n";
  cout<<sq(c);
  cout<<endl;
  cout<<get(vartika);
  //cout << "\nHello World!\n";
}