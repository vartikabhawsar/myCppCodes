#include <iostream>
using namespace std;
int main()
{
    
    int i=0,count=0;
    char a[30];
    cout<<"enter the string :";
    cin.getline(a,30);
    while(a[i]!=0)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')//catital also
        {
            count++;
        }
        i++;
    }
    cout<<count; 
}
    