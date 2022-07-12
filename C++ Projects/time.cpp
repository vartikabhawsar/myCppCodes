#include<ctime>
#include<iostream>
using namespace std;
int main() {
    time_t x = time(0);   
    tm* now = localtime(&x);
    cout << (now->tm_year + 1900) << "/"<< (now->tm_mon + 1) << "/" <<  now->tm_mday << "\n";
         } 