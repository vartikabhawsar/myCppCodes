#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int d,m,y;
    cin>>d>>m>>y;
    if(m>12||d>3||d<=0||m<=0)
    {
        cout<<"invalid";
    }
    else 
        switch(m)
        {
        case 2:
            if (y%4==0 && d<=29)
            cout<<"valid date";
            else if(y%4!=0&& d<=28)
            cout<<"valid date";
            else 
            cout<<"invalid";
        case 9:
        case 4:
        case 6:
        case 11:  if(d>30)
                    cout<<"invalid";
                    else 
                    cout<<"valid";
        default : cout<<"value";
        }
        return 0;
    }