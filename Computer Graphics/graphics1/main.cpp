/*This program is written in Code::Blocks IDE*/
#include <iostream>
#include <graphics.h>

int main(){
    initwindow(600,500);
    line(200,250,400,450);
    for(int i = 0; i<40 ; i++){
        for(int j = 0;j<40; j++){
            putpixel(280+i,130+j,GREEN);
        }
    }
    circle(300,350,100);
    rectangle(200,250,400,450);
    rectangle(300,250,400,350);
    ellipse(300,150,0,360,200,100);
    getch();
    closegraph();
}
