#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%10==0)
        cout<<n/10<<endl;
        else
        cout<<n/10+1<<endl;
    }
	//your code goes here
	return 0;
}