#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x=n/m;
        if(x%2==0&&n%m==0)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
    
	// your code goes here
	return 0;
}
