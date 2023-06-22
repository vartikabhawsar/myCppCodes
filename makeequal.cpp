#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int c=0;
        int maxcount=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            c=0;
            for(int j=0;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
                if(maxcount<c)
                maxcount=c;
            }
        }
        
        cout<<n-maxcount<<endl;
    }
	// your code goes here
	return 0;
}
