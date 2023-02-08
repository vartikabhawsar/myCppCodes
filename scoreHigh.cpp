#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        // if(n==a+b+c+d)
        // {
        //     cout<<n;
        // }
    //   if(a>b+c+d)
    //     {
    //         cout<<a<<endl;
    //     }
    //     else if(b>a+c+d)
    //     {
    //         cout<<b<<endl;
    //     }
    //     else if(c>a+b+d)
    //     {
    //         cout<<c<<endl;
    //     }
    //     else if(d>a+b+c)
    //     {
    //         cout<<d<<endl;
    //     }
    //     else if(a==b==c==d)
    //     {
    //         cout<<a<<endl;
    //     }
    int maxm=max(a,max(b,max(c,d)));
    cout<<maxm<<endl;
    }
    
	// your code goes here
	return 0;
}
