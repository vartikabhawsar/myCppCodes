#include <iostream>
using namespace std;
void swap(int ,int );
  int main()
  {
    int x,y;
    cout<<"enter x and y";
    cin>>x>>y;
    swap(x,y);
    cout<<x<<"  "<<y;
    return 0;
  }
  void swap(int a ,int b)
  {
    int t;
    t=a;
    a=b;
    b=t;
    cout<<a<<b;
  }