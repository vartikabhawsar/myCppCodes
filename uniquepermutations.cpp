#include <iostream>
#include <string.h>
#include <list>
#include<vector>
#include <algorithm>
using namespace std;
bool compare(vector<int> a, vector<int> b)
{
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<a.size();i++)
    {cout<<a.at(i)<<"  "<<b.at(i)<<"\n";

    if(a.at(i)!=b.at(i))
    {
        return 0;
    }
    }
    return 1;

}

int main()
{
    vector<int> l;

    list <vector <int>> l1;
    vector <int> temp;

        int n;
        int k,x=2;
        cin >> n;
        //cin>>x;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            l.push_back(k);
        }

        for(int i=0;i<n;i++)
        {
            auto it = l.begin()+i;
            temp.clear();
            temp.push_back(*it);
            for(int j=i+1;j<n;j++)
            {  it++;
               temp.push_back(*it);
               
               //sort(temp.begin(),temp.end());
               l1.push_back(temp);
               temp.pop_back();
                
            }
        }
        l1.sort();
        l1.unique(compare);
   // list< vector <int>>::iterator p;
        for(auto p= l1.begin(); p!=l1.end(); p++)
        {   vector<int> l2=*p;
        cout<<"\n";
            for (int i = 0; i < 2; i++)
            {
                 cout<<(*p).at(i)<<" ";
            }
            
         
        }
}