#include <iostream>
using namespace std;
struct Area
{
    private:
    int l,b,ar;
    public:
        void indata()
        {
            cout<<"\n enter l & b";
            cin>>l>>b;
        }
        void calc()
        {
            ar=l*b;
        }
        void outdata()
        {
            cout<<ar;
        }
};
int main()
{
    Area a1;
    a1.indata();
    a1.calc();
    a1.outdata();
    

return 0;
}