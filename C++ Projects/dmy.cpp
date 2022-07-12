#include<ctime>
#include <iostream>
using namespace std;
int main()
{
int m,d,y;


    time_t x = time(0);   
    tm* now = localtime(&x);
    y=now->tm_year + 1900 ;
    m=now->tm_mon + 1 ; 
    d= now->tm_mday ;
          


    if(m>31 || m>12 || d<1|| m<1)
    cout<<"invalid date ";
    else if(m==2)
    {
       if(y%4!=0&& d>28)
       cout<<"invalid date";

       else if(d>29)
       cout<<"invalid date";
    }
 else if((m==4||m==6||m==9||m==11 && d>30 ))
 {
     cout<<"Invalid date";
 }
 else 
    cout<<"valid date";
        
        return 0;
    

}