#include <iostream>
using namespace std;
void display(char ch,int n=10)// if a parameter has a default value all the parameters to its right should also has a default value
{
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<ch;
    }
}
int main()
{
    char k;
    int m;
    cout<<"enter k and m : ";
    cin>>m>>k;
    display();
    display(k);
    display(k,m);
    display(m);
    return 0;

}