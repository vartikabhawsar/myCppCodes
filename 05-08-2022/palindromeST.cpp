#include <iostream>
using namespace std;
int main()
{
    
    int c=0,i,d=0,temp;
    char a[30],b[30];
    cout<<"enter the string :";
    cin.getline(a,30);
    while(a[c]!='\0')
    {
        c++;
    }
    for(int i=0;i<c/2;i++)
    {
        if(a[i]==a[c-i-1])
        {
            d++;
        }
        else 
        {
            break;
        }
        
    }
    if(d==c/2)
        {
            cout<<"palindrome";
        }
    else
    {
        cout<<"not palindorme";
    }
}