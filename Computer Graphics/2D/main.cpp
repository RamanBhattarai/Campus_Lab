#include <iostream>
#include <graphics.h>
#include <math.h>
#define PI 3.14159265
using namespace std;

void DisplayMenu(){
    cout<<"\n1.Translation"<<endl;
    cout<<"\n2.Scaling"<<endl;
    cout<<"\n3.Rotation"<<endl;
    cout<<"\n4.Exit"<<endl;
}
void DrawRectangle(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int color){
    setcolor(color);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x4,y4);
    line(x4,y4,x1,y1);
}
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,ch,x,y,a1,a2,a3,a4,b1,b2,b3,b4;
    float an;
    cout << "Enter the co-ordinates of diagonal of rectangle" << endl;
    cout << "x1, y1 : ";
    cin >> x1 >> y1;
    cout << "x3, y3 : ";
    cin >> x3 >> y3;

    x2 = x3;
    x4 = x1;
    y2 = y1;
    y4 = y3;

    initwindow(600,600);
    DrawRectangle(x1,y1,x2,y2,x3,y3,x4,y4,15);

    while(1){
        DisplayMenu();
        cout<<"(1-4) : ";
        cin>>ch;
        switch(ch){
        case 1:
            cout<<"Translating Vector (x,y) : ";
            cin>>x>>y;
            DrawRectangle(x1+x,y1+y,x2+x,y2+y,x3+x,y3+y,x4+x,y4+y,15);
            getch();
            /*to clear rectangle*/
            DrawRectangle(x1+x,y1+y,x2+x,y2+y,x3+x,y3+y,x4+x,y4+y,0);
            DrawRectangle(x1,y1,x2,y2,x3,y3,x4,y4,15);
            break;
        case 2:
            cout<<"Scaling Factor x,y : ";
            cin>>x>>y;
            DrawRectangle(x1*x,y1*y,x2*x,y2*y,x3*x,y3*y,x4*x,y4*y,15);
            getch();
            /*to clear rectangle*/
            DrawRectangle(x1*x,y1*y,x2*x,y2*y,x3*x,y3*y,x4*x,y4*y,0);
            DrawRectangle(x1,y1,x2,y2,x3,y3,x4,y4,15);
            break;
        case 3:
            cout<<"Angle of rotation : ";
            cin>>an;
            an = an * (PI/180);
            a1 = (x1+((x1-x1)*cos(an) - (y1-y1)*sin(an)));
            b1 = (y1+ ((y1-y1)*cos(an) + (x1-x1)*sin(an)));
            a2 = (x1+((x2-x1)*cos(an) - (y2-y1)*sin(an)));
            b2 = (y1+ ((y2-y1)*cos(an) + (x2-x1)*sin(an)));
            a3 = (x1+((x3-x1)*cos(an) - (y3-y1)*sin(an)));
            b3 = (y1+ ((y3-y1)*cos(an) + (x3-x1)*sin(an)));
            a4 = (x1+((x4-x1)*cos(an) - (y4-y1)*sin(an)));
            b4 = (y1+ ((y4-y1)*cos(an) + (x4-x1)*sin(an)));
            DrawRectangle(a1,b1,a2,b2,a3,b3,a4,b4,15);
            getch();
            /*to clear rectangle*/
            DrawRectangle(a1,b1,a2,b2,a3,b3,a4,b4,0);
            DrawRectangle(x1,y1,x2,y2,x3,y3,x4,y4,15);
            break;
        case 4:
            exit(0);
            break;
        default :
            break;
        }
    }
    return 0;
}
