#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int x,y,x1,x2,y1,y2,k,dx,dy,s,xi,yi;
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\tc\\bgi:");
printf("enter first point");
scanf("%d%d",&x1,&y1);

printf("enter second point");
scanf("%d%d",&x2,&y2);
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
x=x1;
y=y1;
putpixel(x,y,GREEN);
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
s=abs(dx);
else
s=abs(dy);
xi=dx/s;
yi=dy/s;
x=x1;
y=y1;
putpixel(x,y,GREEN);
for(k=0;k<s;k++)
{
x=x+xi;
y=y+yi;
putpixel(x,y,GREEN);
}
getch();
closegraph();
}
