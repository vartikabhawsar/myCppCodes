#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
        vector<int> v;
        int n, x = 0, y = 0;
        int k;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            v.push_back(k);
        }
        int max=INT_MIN,s=0,start,end;
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            sum=sum+v[i];
            if(max<sum)
            {
            max=sum;
            start=s;
            end=i;
            }

            if(sum<0)
            {
            sum=0;
            s=i+1;
            }
}cout<<max<<" ";
}