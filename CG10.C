#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main(){
	int gd=DETECT,gm;
	float theta=30,x0,y0,r=40,rad1,rad2;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	x0=getmaxx()/2;
	y0=getmaxy()/2;
	while(!kbhit()){
		circle(x0,y0,r);
		rad1=theta*3.14f/180;
		rad2=(theta+90)*3.14f/180;
		line(x0,y0,x0+r*sin(rad1),y0+r*cos(rad1));
		line(x0,y0,x0+r*sin(rad2),y0+r*cos(rad2));
		line(x0,y0,x0-r*sin(rad2),y0-r*cos(rad2));
		theta=8;
		delay(70);
		cleardevice();
		
	}
	closegraph();
}
