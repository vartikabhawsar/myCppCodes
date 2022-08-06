#include <iostream>
using namespace std;
int main()
{
    
    int c=0,i,d=0,temp;
    char a[30],b[30];
    cout<<"enter the string :";
    cin.getline(a,30);
    cout<<"enter the next string :";
    cin.getline(b,30);
    while(a[c]!='\0')
    {
        c++;
    }
    while(a[d]!='\0')
    {
        d++;
    }
    if(d==c)
    {
        for(i=0;i<c;i++)
        {
            if(a[i]==b[i]);
            else
            break;

        }
        if(i==c)
        {
            cout<<"equal string";
        }
        else 
        cout<<"unequal";
    }
    else cout<<"nt equal";

}