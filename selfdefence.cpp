#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],c=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=10&&a[i]<=60)
            c++;
        }
        cout<<c<<endl;
    }
	// your code goes here
	return 0;
}