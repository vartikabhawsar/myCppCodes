#include <iostream>
using namespace std;
int main()
{
    int a[3][2];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        cin>>*(a[i]+j);
    }
    int *k;
    k=&a[0][0];
    for(int i=0;i<6;i++)
    {
        cout<<k;
        k++;
    }
}