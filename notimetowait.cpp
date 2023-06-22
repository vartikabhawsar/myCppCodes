#include <iostream>
using namespace std;

int main() {
    
    int n,h,x;
    int c=0;
    cin>>n>>h>>x;
    int m[n];
    for(int i=0;i<n;i++)
    {
        cin>>m[i];
        if(x+m[i]>=h)
        {
        c=1;
        }
    }

    if(c==1)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;

	return 0;
}
