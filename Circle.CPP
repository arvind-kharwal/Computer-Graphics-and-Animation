#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd, &gm,"C:/TURBOC3/BGI");
circle(330,180,100);
getch();
closegraph();
}