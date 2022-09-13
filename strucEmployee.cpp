#include <iostream>
#include<string.h>
using namespace std;
struct employee
{
    char name[20];
    char desig[20];
    int sal;
    
};
int main()
{
    int sum=0,count=0;
    float avg;
    int n;
    cout<<"enter no. of employee : ";
    cin>>n;
    char str[]="manager";
    employee e[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter name : ";
        cin.getline(e[i].name,20);
        cout<<"enter designation : ";
        cin.getline(e[i].desig,20);
        cout<<"enter salary : ";
        cin>>e[i].sal;
        if(strcmp(str,e[i].desig)==0)
        {
            sum=sum+e[i].sal;
            count++;
        }
    }
    avg=sum/count;
    cout<<avg;
}