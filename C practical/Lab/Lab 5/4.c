#include<stdio.h>
#include<math.h>

struct coordinate{
    int x,y;
}p[2];

int main(){
    for (int i=0;i<2;i++){
        printf("Enter the x coordinate of point %i: ",i+1);
        scanf("%i",&p[i].x);
        printf("Enter the y coordinate of point %i: ",i+1);
        scanf("%i",&p[i].y);
    }
    float dis;
    dis=sqrt((p[0].x-p[1].x)*(p[0].x-p[1].x)+(p[0].y-p[1].y)*(p[0].y-p[1].y));
    printf("The distance between two points is %.02f\n",dis);
    return 0;
}
