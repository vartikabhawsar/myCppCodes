#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int s,x,y,z;
        cin>>s>>x>>y>>z;
        if(s-(x+y)>=z)
        cout<<"0"<<endl;
        else if(s-(x+y)<z)
        {
         if(s-x>=z||s-y>=z)
         cout<<"1"<<endl;
         else 
         cout<<"2"<<endl;
        }
    }
	// your code goes here
	return 0;
}
