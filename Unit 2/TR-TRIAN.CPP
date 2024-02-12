#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
int x1,y1,x2,y2,x3,y3,x,y,gd=DETECT,gm,errorcode;
clrscr();
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
errorcode = graphresult();
if(errorcode!=grOk)
{
printf("Graphics Error %s",grapherrormsg(errorcode));
printf("Press any key to exit!");
getch();
exit(1);
}
printf("\nEnter the coordinates of line1: ");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
printf("\nEnter the coordinates of relative line: ");
scanf("%d%d",&x3,&y3);
printf("\n\n\n\nEnter the translation Coordinates:");
scanf("%d%d",&x,&y);
cleardevice();
line(x1,y1,x2,y2);
moveto(x2,y2);
lineto(x3,y3);
moveto(x3,y3);
lineto(x1,y1);
moveto(x1+x,y1+y);
lineto(x2+x,y2+y);
moveto(x2+x,y2+y);
lineto(x3+x,y3+y);
moveto(x3+x,y3+y);
lineto(x1+x,y1+y);
getch();
closegraph();
}