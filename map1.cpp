#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()

{
    map<char,int> m;
    m.insert({'h',2});
    m.insert({'e',1});
    m.insert({'l',1});
    for(auto it=m.begin();it!=m.end();it++)
    {
        (it->second)++;
        cout<<it->first<<" "<<it->second<<"\n";
    }

}