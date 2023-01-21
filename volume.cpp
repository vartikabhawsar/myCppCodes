#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int c=0;
        int x,y;
        cin>>x>>y;
        if(x<y)
        {
        while(x<y)
            {
                c++;
                x++;
            }
        }
        else if(y<x)
        {
            while(x>y)
            {
                c++;
                y++;
            }
        }
        cout<<c<<endl;
    }
	return 0;
}
