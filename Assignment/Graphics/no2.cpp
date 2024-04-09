#include<stdio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	line(200,100,200,400);
	line(200,400,300,300);
	line(300,300,300,200);
	line(300,200,400,200);
	line(400,200,500,100);
	line(500,100,200,100);
	delay(5000);
	closegraph();
	return 0;
}
