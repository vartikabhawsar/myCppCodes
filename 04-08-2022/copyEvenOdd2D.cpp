// 1-d 4126350
// 2 d 4268000
//     0000135
    #include <iostream>
using namespace std;
int main()
{
   int n,j=0;
   cin>>n;
    int a[n],b[10][10]={0};
    cout<<"enter 1D array";
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            b[0][j]=a[i];
            j++;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            b[1][j]=a[i];
            j++;
        }
    }

for(int i=0;i<2;i++)
{
    cout<<"\n";
    for(int j=0;j<n;j++)
    {
        cout<<b[i][j]<<" ";
    }
}
}