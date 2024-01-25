#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
int x1,y1,x2,y2,i,len, gd=DETECT,gm,errorcode;
float incx,incy,x,y;
clrscr();
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
errorcode = graphresult();
if(errorcode!=grOk)
{
 printf("Graphics error %s",grapherrormsg(errorcode));
 printf("Press any key to exit");
 getch();
 exit(1);
}
printf("Enter the values of x1,y1,x2,y2: ");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
len = abs(x2-x1);
if(abs(y2-y1)>len)
 len = abs(y2-y1);
incx = (x2-x1)/len;
incy = (y2-y1)/len;
x = x1+0.5;
y = y1+0.5;
for(i=1;i<=len;i++)
{
 putpixel(x,y,6);
 x = x+incx;
 y = x+incy;
 delay(100);
}
getch();
}
