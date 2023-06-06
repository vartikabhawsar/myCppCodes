#include <bits/stdc++.h>
using namespace std;

int main()
{
   int x;
   double y;
    cin>>x>>y;
    if(x % 5==0)
    {
        if(x<y&& y-x-0.5>0)
        {
        y=y-x-0.5;
        cout<<y;
        }
        else
        {
        cout<<y;
        }
    }
    return 0;
}