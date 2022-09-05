#include <iostream>
using namespace std;
int main()
{
    int m;
    int *b[5];
    cin>>m;
    
    for (int i = 0; i < 5; i++)
    {
       b[i]=new int[m];
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>*(*(b+i)+j);
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<"\n";
        for(int j=0;j<m;j++)
        {
            cout<<*(*(b+i)+j)<<" ";
        }
    }
}
