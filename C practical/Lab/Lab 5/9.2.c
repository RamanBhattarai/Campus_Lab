#include<stdio.h>

int main(){
    enum item{pencil,eraser,sharpner=-2,paper,notebook,scale,compass,box};
    printf("pencil = %d\n",pencil);
    printf("eraser = %d\n",eraser);
    printf("sharpner = %d\n",sharpner);
    printf("paper = %d\n",paper);
    printf("notebook = %d\n",notebook);
    printf("scale = %d\n",scale);
    printf("compass = %d\n",compass);
    printf("box = %d\n",box);
    return 0;
}
