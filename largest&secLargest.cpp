#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int c;       
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int i;
        i=n-1;
        for( i ;i>=0;i--)
        {
          if(a[i]!=a[i-1])
          {
            c=a[i]+a[i-1];
              break;}
        }
      
        cout<<c<<endl;
    }
	// your code goes here
	return 0;
}
