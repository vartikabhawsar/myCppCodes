#include <iostream>
#include <string.h>
using namespace std;
class scramble
{
    char s1[20];
    public: 
    void input()
    {
        cout<<"enter a string  :  ";
        cin.getline(s1,80);
    }
    string swap(char s1[])
    {
        char t;
        for(int i=0;i<strlen(s1)-1 ;i++)
        {
            if(s1[i]=='a'||s1[i]=='A')
            {
            t=s1[i];
            s1[i]=s1[i+1];
            s1[i+1]=t;
            i++;
            }
        }
      
        return s1;
    }
    void scString()
    {
        int beg=0;
        int end;
        char j[20];
        for(int i=0;i<strlen(s1);i++)
        {
        if(s1[i]==' ')
        {
            int end=i-1;
        }
        int k=0;
        for (int i=beg;i<end;i++)
        {
            j[k]=s1[i]; k++;
        }
        j[k]='\0';
        beg=end+1;
        
        cout<<swap(j)<<" ";
        }
    
}};
int main()
{
    scramble s1;
    s1.input();
    s1.scString();
}