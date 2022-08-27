#include<iostream>
using namespace std;
int s=0; //it will be accessible throughout the code
int sum(int l)
{
   
//    static int s=0;  //when this func run second time the var s will have upgraded value
    s=s+l;
    s=s+4;
    return s;
}
int main()
{
    int k,i;
    for(int i=1;i<=3;i++)
    {
        k=sum(i);
     
        cout<<k<<" ";
    }
    return 0;
}