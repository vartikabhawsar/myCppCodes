#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        int count = 0;
        for (int j = i / 2; j >= 2; j--)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}