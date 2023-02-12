#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,s;
        cin>>x>>y>>z;
        if(x>3)
        {
            if(x%3==0)
            {
                s=(y*x)+((x/3)-1)*z;
                cout<<s<<endl;
            }
            else
            {
                s=(y*x)+((x/3))*z;
                cout<<s<<endl;
            }
            
        }
        else 
        {
        s=y*x;
        cout<<s<<endl;
        }
    }
	// your code goes here
	return 0;
}
