#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<< inc_arr(n, arr);
}
    int inc_arr(int n, int arr[n])
    {
        int x;
        for(int i=0;i<n;i++)
        {
            return arr[i] +2;
        }
    }
