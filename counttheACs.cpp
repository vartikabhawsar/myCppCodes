#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int p,x;
        cin>>p;
       if(p>=100)
        {
          x= p/100+p%100;
          if(x>10)
          cout<<"-1"<<endl;
          else
          cout<<x<<endl;
        }
        else if(p<=10)
        {
            cout<<p<<endl;
        }
        else if(p>10 && p<100)
        {
            cout<<"-1"<<endl;
        }
    }
    
	// your code goes here
	return 0;
}
