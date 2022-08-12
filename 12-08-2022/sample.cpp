#include <iostream>
using namespace std;

    void sum(int);
    
    int main()
    {
        int x; 
        cout<<"\n enter x : ";
        cin>>x;
        sum(x);
       
        return 0;
    }
    void sum(int a)
    {
        int i;
        for(i=1;i<=a;i++)
        {
            cout<<"*";
        }
    }