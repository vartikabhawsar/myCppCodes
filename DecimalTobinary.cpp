#include <iostream>
#include<math.h>
using namespace std;
int deciToBin(int);
int main()
{
    int n;
    cin>>n;
   
    cout<<deciToBin(n);
    return 0;
}
int deciToBin(int n)
{
    
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n%2 + 10*deciToBin(n/2));
    }
    
    

          
}

