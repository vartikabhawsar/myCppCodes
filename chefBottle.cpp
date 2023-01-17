#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        if(y/x<n)
        cout<<y/x<<endl;
        else if(y/x>n)
        cout<<n<<endl;
        
    
    }
	// your code goes here
	return 0;
}
