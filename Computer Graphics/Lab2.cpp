#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main(){
    float x1, x2, x, y1, y2, y, dx, dy, s;
    printf("Enter coordinate(x1,y1)");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinate(x2,y2)");
    scanf("%f %f", &x2, &y2);
    dx = x2 - x1;
    dy = y1 - y2;
    if (abs(dx)>=abs(dy)){
        s = abs(dx);
    }else{
        s = abs(dy);
    }
    dx = dx/(float)s;
    dy = dy/(float)s;
    x = x1;
    y = y1;
    int i = 1;
    while (i <= s){
        putpixel(x,y,WHITE);
        x = x+dx;
        y = y+dy;
        i++;
    }
    initwindow(500,500);
    getch();
}
