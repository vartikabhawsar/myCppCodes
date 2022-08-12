#include <iostream>
using namespace std;

    int sum(int ,int);
    int main()
    {
        int x,y,s;
        cout<<"\n enter x and y";
        cin>>x>>y;
        s=sum(x,y);
        cout<<s;
        return 0;
    }

    int sum(int a,int b )
        {
            int s=0;
            for(int i=a;i<=b;i++)
            {
                s=s+i;
                
            }
            return s;
        }
    
