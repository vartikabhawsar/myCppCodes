#include <iostream>
#include <math.h>
using namespace std;
struct Point
{
    int x;
    int y;
};

int distance(Point p1, Point p2)
{
    int a1, a2;

    a1 = p1.x - p2.x;
    a2 = p1.y - p2.y;
    return sqrt((a1 * a1) + (a2 * a2));
}

int main()
{
    Point p1, p2;
    cout << " coordinate for p1 x: ";
    cin >> p1.x;
    cout << "coordinate for p1 y: ";
    cin >> p1.y;

    cout << "coordinate for p2 x: ";
    cin >> p2.x;
    cout << "coordinate for p2 y: ";
    cin >> p2.y;
    cout << "distance is: " << distance(p1, p2);
    
}