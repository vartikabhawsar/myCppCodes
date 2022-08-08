#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    
    int count=0,j=0,k;
    char a[100],w[30];
    cout<<"enter the string :";
    cin.getline(a,30);
    int c=strlen(a);
    cout<<"enter the word to be searched :";
    cin.getline(w,30);
    int d=strlen(w);
for(k =0;k<d;k++)
{
    if(a[k]!=w[k])
    {
       break;
    }
}
if(k==d)
{
    count++;
}
for(int i=0;i<c;i++)
{
    if(a[i]==' ')
    {
    for(j=0;j<d;j++)
    {
        if(a[i+1+j]!=w[j])
        {
            break;
        }
    }
        if(j==d)
        {
            if( i+j+1==c || a[i+j+1]==' ')
            {
            count++;
            }
        }

}
}
cout<<count;
}
