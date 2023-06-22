#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		if(n%k==0)
		{cout<<n/k<<endl;
		}
		else
		cout<<(n/k)+1<<endl;
	}
    
	// your code goes here
	return 0;
}
