#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
       int c=21-(a+b);
       if(c>10 ||c<1)
        cout<<"-1"<<endl;
        else
        cout<<c<<endl;
    }
	// your code goes here
	return 0;
}
