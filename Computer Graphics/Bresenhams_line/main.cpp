#include <stdio.h>
#include <graphics.h>

int main(){
    int x1, y1, x2, y2, x, y, dx, dy, step, P, i;
    printf("Enter the coordinates (x1,y1): ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the coordinates (x2,y2): ");
    scanf("%d %d",&x2,&y2);
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    x = x1;
    y = y1;
    initwindow(600, 600);
    putpixel(x, y, WHITE);
    if (dx >= dy ){
        step = dx;
        P = 2 * dy - dx;
        while(i<step){
            x1 > x2 ? x-- : x++;
            if (P < 0){
                P = P + 2 * dy;
            }else{
                y1 > y2 ? y-- : y++;
                P = P + 2 * dy - 2 * dx;
            }
            putpixel(x, y, WHITE);
            i++;
        }
    }else{
        step = dy;
        P = 2 * dx - dy;
        while(i < step){
            y1 > y2 ? y-- : y++;
            if (P < 0){
                P = P + 2 * dx;
            }else{
                x1 > x2 ? x-- : x++;
                P = P + 2 * dx - 2 * dy;
            }
            putpixel(x, y, WHITE);
            i++;
        }
    }
    getch();
}
