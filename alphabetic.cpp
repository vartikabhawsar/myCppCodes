#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int n=5,l;
    char t[20];
    char s[10][20];
    for(int i=0;i<n;i++)
    {
        cin.getline(s[i],20,'\n');
      
    }
    for(int k=0;k<n;k++)
    {
    for(int j=0;j<n;j++)
    {

        l=strcmp(s[k],s[j]);
        if(l > 0)
        {
            strcpy(t,s[k]);
            strcpy(s[k],s[j]);
            strcpy(s[j],t);
        }
       
    }
    }
    for(int j=0;j<n;j++)
    {
        cout<<s[j]<<" ";
       
    }
}