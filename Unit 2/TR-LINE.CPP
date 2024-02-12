#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
int x1,y1,x2,y2,x,y,gd=DETECT,gm,errorcode;
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
printf("\nEnter the coordinates of line: ");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
line(x1,y1,x2,y2);
printf("\n\n\n\nEnter the translation Coordinates:");
scanf("%d%d",&x,&y);
printf("\nNow hit a key to see the translation:");
getch();
line(x1+x,y1+y,x2+x,y2+y);
getch();
}