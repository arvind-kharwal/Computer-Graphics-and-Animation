#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void drawline(int,int,int,int);
void main( )
{
  int gd = DETECT, gm,errorcode,x1,y1,x2,y2;
  initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
  errorcode = graphresult();
  if(errorcode!=grOk)
  {
    printf("Graphics Error %s",grapherrormsg(errorcode));
    printf("Press any key to exit");
    getch();
    exit(1);
  }
  printf("Enter the Coordinates of 1st Point:");
  scanf("%d%d",&x1,&y1);
  printf("Enter the Coordinates of 2nd Point:");
  scanf("%d%d",&x2,&y2);
  drawline(x1,y1,x2,y2);
  getch( );
  closegraph( );
}

void drawline(int x1,int y1,int x2,int y2)
{
  int dx,dy,p,x,y;
  dx = x2-x1;
  dy = y2-y1;
  x = x1;
  y = y1;
  p = 2*dy-dx;
  while(x<x2)
  {
    if(p>=0)
    {
      putpixel(x,y,9);
      y = y+1;
      p = p+2*(dy-dx);
    }
    else
    {
      putpixel(x,y,7);
      p = p+2*dy;
    }
    x = x+1;
  }
}