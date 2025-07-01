#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{
    int x, y, r;
    cout << "Enter the center of circle: ";
    cin >> x >> y;
    cout <<"Enter the radius of circle: ";
    cin >> r;
    initwindow(500,500);
    circle(x,y,r);
    getch();
    return 0;
}
