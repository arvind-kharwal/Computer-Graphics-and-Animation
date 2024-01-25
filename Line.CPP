#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main( )
{
  int gd = DETECT, gm,errorcode;
  initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
  errorcode = graphresult();
  if(errorcode!=grOk)
  {
    printf("Graphics Error %s",grapherrormsg(errorcode));
    printf("Press any key to exit");
    getch();
    exit(1);
  }
  line(20,20,200,200); //Putpixel(X1,Y1,Color)
  getch( );
  closegraph( );
}
