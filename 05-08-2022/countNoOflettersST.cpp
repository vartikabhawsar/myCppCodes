#include <iostream>
using namespace std;
int main()
{
    
    int i=0;
    char a[30];
    cout<<"enter the string";
    cin.getline(a,30);
    while(a[i]!='\0')
    {
        i++;
    }
    cout<<i;
}