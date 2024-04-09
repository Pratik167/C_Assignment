#include<stdio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	rectangle(200,200,500,400);
	line(200,200,300,100);
	line(300,100,600,100);
	line(600,100,500,200);
	line(500,200,500,400);
	line(500,400,600,300);
	line(600,300,600,100);
	delay(5000);
	closegraph();
	return 0;
}
