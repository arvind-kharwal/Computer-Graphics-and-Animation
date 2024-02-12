#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm,errorcode;
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
moveto(200,200);
lineto(250,300);
getch();
closegraph();
}