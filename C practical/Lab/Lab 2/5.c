#include<stdio.h>

int main(){
    int x, y, z;
    x = 6;
    y = 3;
    z = 0;
    printf("x   |   y  |\t expressions \t|  results \n");
    z = y + 3;
    printf("%d   |   %d  |\t x = y + 3 \t|  %d\n",x,y,z);
    z = y - 2;
    printf("%d   |   %d  |\t x = y - 2 \t|  %d\n",x,y,z);
    z = y * 5;
    printf("%d   |   %d  |\t x = y * 5 \t|  %d\n",x,y,z);
    z = x / y;
    printf("%d   |   %d  |\t x = x / y \t|  %d\n",x,y,z);
    z = x % y;
    printf("%d   |   %d  |\t x = x %% y \t|  %d\n",x,y,z);
    return 0;
}
