#include <iostream>
#include <string.h>
using namespace std;
struct employee{
    int id;
    int sal;
    char name[30];
    
};
int main()
{
   int n=3;
    employee e[n],t;

    cout << "enter details of 3 ";
    for(int i=0;i<n;i++)
    {   
        cin >> e[i].id;
        cin>>e[i].sal ;
        cin.getline(e[i].name, 20);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(e[j].sal>e[j+1].sal)
            {
                t=e[j];
                e[j]=e[j+1];
                e[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
    {   
        cout << e[i].id<<" ";
        cout<<e[i].sal <<" ";
        cout<< e[i].name<<" ";
    }
   
    
    
    return 0;
}