//call by reference
#include <iostream>
using namespace std;
void swap(int & ,int &);
  int main()
  {
    int x,y;
    cout<<"enter x and y";
    cin>>x>>y;
    swap(x,y);
    cout<<x<<"  "<<y;
    return 0;
    cout<<x<<y; //if in call by value we cout x and y then value will be stored 
  }
  void swap(int &a ,int &b)
  {
    int t;
    t=a;
    a=b;
    b=t;
    
  }