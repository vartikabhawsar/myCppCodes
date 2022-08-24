#include <iostream>
using namespace std;
class student
{
    char n[30];
    
    int r,marks ,avg;
    public:
        void indata()
        {
            cout<<"enter the name : ";
            cin.getline(n,30);
            cout<<"\n enter marks : ";
            cin>>marks;
            cout<<"enter roll no : ";
            cin>>r;
        }
        void calc()
        {
            avg=marks/5;
        }
        void outdata()
        {
            cout<<avg;
        }
};
int main()
{
    student s1;
    s1.indata();
    s1.calc();
    s1.outdata();
    

return 0;
}