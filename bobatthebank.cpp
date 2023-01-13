#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,w,z;
        cin>>w>>x>>y>>z;
        int f;
        f=w+x*z-y*z;
        cout<<f<<endl;
    }
	// your code goes here
	return 0;
}
