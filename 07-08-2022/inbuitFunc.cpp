#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[30],b[30];
    int l,m;
    cout<<"enter the 1st str : ";
    cin.getline(a,30);
    cout <<"enter the 2nd str : ";
    cin.getline(b,30);
    l=  strcmp(a,b);
    cout<<l<<" ";
    //used to compare two strings and the result is 0 if both the srings are same(every case same)
    //s1<s2 -1
    // s2>s1 1

    m=strncmp(a,b,3);
    cout<<m<<" ";
    //compares 1st n letters of both strings 

    strcpy(a,b);
    cout<<a<<" ";
    //copies value of b to a
    //a=vartika b=bhawsar ans-(if cout<<a ) bhawsar

    strcat(a,b);
    cout<<a<<" ";
    //adds value of b to a 
    //a=hello b=world  ans-helloword

    strrev(b);
    cout<<b<<" ";
    //reverses the string an stores in the same variable

    strlwr(a);
    cout<<a<<" ";

    strupr(b);
    cout<<b<<" ";
}