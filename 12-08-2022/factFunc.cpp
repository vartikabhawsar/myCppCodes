#include <iostream>
using namespace std;

    int fact(int);
    int main()
    {
        int x,f; 
        cout<<"\n enter x : ";
        cin>>x;
        f=fact(x);
        cout<<f;
        return 0;
    }

    int fact(int a)
        {
            int f=1;
            for(int i=a;i>=1;i--)
            {
                f=f*i;
                
            }
            return f;
        }
    
