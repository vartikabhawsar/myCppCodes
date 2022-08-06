#include <iostream>
using namespace std;
int main()
{
    
    int c=0;
    char a[30];
    cout<<"enter the string :";
    cin.getline(a,30);
    while(a[c]!='\0')
    {
        c++;
    }
    

    if(a[0]>=97&&a[0]<=122)
    {
        a[0]=a[0]-32;
    }
    
    for(int i=1;i<c;i++)
    {
        if(a[i]==32 && (a[i+1]>=97 && a[i+1]<=122))
        {
            a[i+1]=a[i+1]-32 ;
            i++;
        }
        else if(a[i]>=65&&a[i]<=90)
        {
            a[i]=a[i]+32;

        }
        }
        
        
    
    cout<<a;

}