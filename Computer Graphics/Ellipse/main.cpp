#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    float p, x, y, xc, yc, a, b;
    cout<<"Enter the center of ellipse (x0,y0) : ";
    cin>>xc>>yc;
    cout<<"Enter the radius of ellipse a,b : ";
    cin>>a>>b;
    x = 0;
    y = b;
    p = (b * b) - (a * a * b) + (0.25 * a * a);
    initwindow(500,500);
    while (2 * b * b * x < 2 * a * a * y){
        putpixel(xc+x,yc+y,WHITE);
        putpixel(xc-x,yc+y,WHITE);
        putpixel(xc+x,yc-y,WHITE);
        putpixel(xc-x,yc-y,WHITE);
        if (p < 0){
            p = p + (2 * b * b * x) + (b * b);
        }
        else{
            y--;
            p = p + (2 * b * b * x) - (2 * a * a * y) + (b * b);
        }
        x++;
    }
    p = ((b * b) * ((x + 0.5) * (x + 0.5))) + ((a * a) * ((y - 1) * (y - 1))) - (a * a * b * b);
    while (y >= 0){
        putpixel(xc+x,yc+y,WHITE);
        putpixel(xc-x,yc+y,WHITE);
        putpixel(xc+x,yc-y,WHITE);
        putpixel(xc-x,yc-y,WHITE);
        if (p > 0){
            p = p + (a * a) - (2 * a * a * y);
        }
        else{
            x++;
            p = p + (2 * b * b * x) - (2 * a * a * y) + (a * a);
        }
        y--;
    }
    getch();
    closegraph();
    return 0;
}
