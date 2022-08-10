#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[30];
    
    cout<<"enter the string  :  ";
    cin.getline(a,30);
    int c=strlen(a);
    int s=0,beg=0 ,t ,j=0;
    
    for (int i = beg; i<c;i++)
    {
        while(a[i]!=32 || s!=c)
        {
            s++;
        }
        j=s;
        while(i<j)
        {
            t=a[i];
            a[i]=a[j-1];
            a[j-1]=t;
            i++; 
            j--;
        }
        beg=s+1;
    }
    
     cout<<a;
}