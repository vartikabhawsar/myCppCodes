#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,x,p;
        cin>>n>>l>>x;
	if(n/2>=l )
	p=x*l;
	else 
	p=(n-l)*x;
	cout<<p<<endl;
		
        
    }
    return 0;
}
