#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

    int x1,x2,x3,y1,y2,y3,dx,dy;

    cout<<"Enter Co-Ordinate of a(x1, y1): ";
    cin>>x1>>y1;
    cout<<"Enter Co-Ordinate of b(x2, y2): ";
    cin>>x2>>y2;
    cout<<"Enter Co-Ordinate of c(x3, y3): ";
    cin>>x3>>y3;

    //Triangle Plot
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    cout<<"Enter the Scaling Factor dx: ";
    cin>>dx;
    cout<<"Enter the Scaling Factor dy: ";
    cin>>dy;

    //Scale Triangle Plot
    line(x1*dx,y1*dy,x2*dx,y2*dy);
    line(x2*dx,y2*dy,x3*dx,y3*dy);
    line(x3*dx,y3*dy,x1*dx,y1*dy);

    getch();

    closegraph();

    return 0;
}
