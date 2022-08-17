#include <iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;

}
float sum(float a,float b)
{
    return a+b;

}
int sum(int x)
{
    return x+10;
}
int main()
{
    cout<<sum(2,3)<<" ";
    cout<<sum(2)<<" ";
    cout<<sum(1.212f,1.421f);
}