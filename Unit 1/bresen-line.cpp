#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void drawline(int,int,int,int);
void main( )
{
  int gd = DETECT, gm,errorcode,x0,y0,x1,y1;
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
  scanf("%d%d",&x0,&y0);
  printf("Enter the Coordinates of 2nd Point:");
  scanf("%d%d",&x1,&y1);
  drawline(x0,y0,x1,y1);
  getch( );
  closegraph( );
}

void drawline(int x0,int y0,int x1,int y1)
{
  int dx,dy,p,x,y;
  dx = x1-x0;
  dy = y1-y0;
  x = x0;
  y = y0;
  p = 2*dy-dx;
  while(x<x0)
  {
    if(p>=0)
    {
      putpixel(x,y,7);
      y = y+1;
      p = p+2*(dy-dy);
    }
    else
    {
      putpixel(x,y,7);
      p = p+2*dy;
    }
    x = x+1
  }
}