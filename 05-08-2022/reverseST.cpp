#include <iostream>
using namespace std;
int main()
{
    
    int c=0,temp;
    char a[30];
    cout<<"enter the string :";
    cin.getline(a,30);
    while(a[c]!='\0')
    {
        c++;
    }
    for(int i=0;i<c/2;i++)
    {
        temp=a[i];
        a[i]=a[c-i-1];
        a[c-i-1]=temp;
    }
   
        cout<<a;
    
}


