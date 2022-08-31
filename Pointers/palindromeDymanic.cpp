#include <iostream>
using namespace std;
int main()
{
    int n,c=0;
    int *p;
    cout<<"enter the size : ";
    cin>>n;
    
    p= new int [n];
    cout<<"enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>*(p+i);
    }
    for(int i=0;i<=n/2;i++)
    {
            if(*(p+i)==*(p+n-1-i))
            {
            c++;
            break;
            }
        
    }
    if(c==n/2)
    {
        cout<<"palindrome";

    }
    else
    {
        cout<<"not ";
    }
}