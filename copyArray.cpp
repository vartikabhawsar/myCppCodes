#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    int a[n];
    int b[m], c[m + n];

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    for (int k = 0; k < n + m; k++)
    {
        if (k < n)
        {
            c[k] = a[k];
        }
        else
        {
            // if (n < m)
                c[k] = b[k - n];
            // else
            //     c[k] = b[n - k];
        }
    }
    for (int i = 0; i < m + n; i++)
    {
        cout << c[i];
    }
}
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, m, n, count = 0;
//     cout << "Enter size of first array\n";
//     cin >> m;
//     cout << "Enter size of second array\n";
//     cin >> n;
//     int a[m], b[n], c[m + n];
//     cout << "Enter elements of array\n";
//     for (int i = 0; i < m; i++)
//     {
//         cin >> a[i];
//     }

//     cout << "Enter elements of array\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> b[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         c[i] = a[i];
//     }
//     // for (int i = n; i < m + n; i++)
//     // {
//     //     c[m + n - i] = b[i - n];
//     // }
//     // cout<<"\n";
//     // cout << c[i] << " ";
//     // return 0;
//     for (int i = 0; i < n; i++)
//     {
//         c[m + i] = b[i];
//     }
//     cout << "\n";
//     cout << c[i] << " ";
//     return 0;
// }