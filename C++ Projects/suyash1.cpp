#include <iostream>
using namespace std;

int cube1(int n)
{
    return n*n*n;
}
int cube(int n, int arr[])
{
    int sum=0;
    for(int i=0; i<n;i++)
    {
        sum+=cube1(arr[i]);
        
    }
    return sum;
}
int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    cout<< cube(n,arr);
    return 0;
}

