#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(a>=65 && a<=90)
    {
        switch(a)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':  
                cout << "uppercase vowel";
                        break;
            default: 
                cout << "uppercase consonents";
        }}
        else if(a >=97 && a <= 122)
        {
            switch(a)
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':   cout<<"Lowercase Vowel";
                            break;
                default :
                            cout<<"lowercase consonent";
            }
        }
        else cout<<"Invalid";
        return 0;
}
    