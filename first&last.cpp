#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        int s=0;
        s=a[n-1]+a[0];
        for(int i=0;i<n-1;i++)
        {
            if(a[i]+a[i+1]>s)
            {
                s=a[i]+a[i+1];
            }
        }
        cout<<s<<endl;
    
        
    }
	// your code goes here
	return 0;
}
