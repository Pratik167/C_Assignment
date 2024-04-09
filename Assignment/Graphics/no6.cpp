#include<stdio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	line(200,100,300,100);
	line(300,100,300,350);
	line(300,350,200,350);
	line(200,350,200,250);
	line(200,250,175,250);
	line(175,250,175,275);
	line(175,275,125,225);
	line(125,225,175,175);
	line(175,175,175,200);
	line(175,200,200,200);
	line(200,200,200,100);
	delay(5000);
	closegraph();
	return 0;
}
