#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int n;
     // n*x+y=z
        n=(z-y)/x;
        cout<<n<<endl;
    }
	// your code goes here
	return 0;
}
