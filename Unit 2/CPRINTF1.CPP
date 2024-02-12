#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{

int i;
clrscr();
for(i=0;i<5;i++)
{
 textcolor(5);
 cprintf("%d",i);
  delay(200);
}
getch();
}