#include <iostream>
using namespace std;
  
    int prime(int);
    
    int main()
    {
        int x; 
        cout<<"\n enter x : ";
        cin>>x;
        cout<<prime(x);
       
        return 0;
    }
    int prime(int a)
    {
        int c;
        for(int i=2;i<=a/2;i++)
        {
            if(a%i==0)
            c++;
        }
        if(c==0)
        return 1;
        else 
        return 0;
    }