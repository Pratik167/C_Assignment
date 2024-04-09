#include<stdio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	line(200,100,450,100);
	line(450,100,450,150);
	line(450,150,500,150);
	line(500,150,500,250);
	line(500,250,450,250);
	line(450,250,450,300);
	line(450,300,200,300);
	line(200,300,200,250);
	line(200,250,150,250);
	line(150,250,150,150);
	line(150,150,200,150);
	line(200,150,200,100);
	delay(5000);
	closegraph();
	return 0;
}
