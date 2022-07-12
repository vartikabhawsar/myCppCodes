#include <iostream>
using namespace std;
int main()
{
    int a; float area;
    cout<<"enter a no. between 1 and 4";
    cin>>a;
    if(a>=1&&a<=4)
    {
        if(a==1)
        {
        int h,b;
        cout<<"enter h and b";
        cin>>h>>b;
        area=0.5*b*h;
        }
        else if(a==2)
        {
            int r;
            cout<<"enter radius";
            cin>>r;
            
            area= 3.14*r*r;
        }
        else if(a==3)
        {
            int l,b;
            cout<<"enter l &b";
            cin>>l>>b;
            area=l*b;
        }
        else if(a==4)
        {
            int a;
            cout<<"enter side";
            cin>>a;
            area=a*a;
        }
        else
        cout<<"invalid";

        cout<<area;
        return 0;
    }
}