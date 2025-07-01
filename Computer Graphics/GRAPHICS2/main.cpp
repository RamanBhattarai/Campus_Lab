#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main(){
    float x1, x2, x, y1, y2, y, dx, dy, step;
    printf("Enter coordinate(x1,y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinate(x2,y2): ");
    scanf("%f %f", &x2, &y2);
    dx = x2 - x1;
    dy = y2 - y1;
    if (abs(dx) >= abs(dy)){
        step = abs(dx);
    }else{
        step = abs(dy);
    }
    dx = dx/ (float)step;
    dy = dy/ (float)step;
    x = x1;
    y = y1;
    int i = 1;
    initwindow(500,500);
    while (i <= step){
        putpixel(x,y,WHITE);
        x = x + dx;
        y = y + dy;
        i++;
    }
    getch();
}
