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
printf("\nEnter the top left coordinates: ");
scanf("%d%d",&x1,&y1);
printf("\nEnter the bottom right coordinates: ");
scanf("%d%d",&x2,&y2);
rectangle(x1,y1,x2,y2);
printf("\n\n\n\nEnter the translation Coordinates:");
scanf("%d%d",&x,&y);
printf("\nNow hit a key to see the translation:");
getch();
rectangle(x1+x,y1+y,x2+x,y2+y);
getch();
}