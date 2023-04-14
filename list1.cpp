#include <iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    list <int > v;
    list<int> l;
    v.push_back(10);
    v.push_back(12);
    v.push_back(15);
    v.push_back(2);
    v.push_back(9);
    l.push_back(1);
    l.push_back(2);
    l.push_back(5);
    l.push_back(21);
    l.push_back(19);
    //l.sort();
    list<int>::iterator it;
    // v.sort();
    // v.merge(l);
    v.swap(l);
    it=v.begin();
    it++;
    it= v.emplace(v.begin(),3);
    // it=v.begin();
    // it++;
    // v.insert(it,55);
    // v.insert(v.begin(),4,99);
    //v.erase(v.begin()+2);
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<"  ";
        
    }

}