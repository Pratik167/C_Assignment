#include<stdio.h>
#include<graphics.h>
#include<dos.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	line(150,250,200,200);
	line(200,200,200,225);
	line(150,250,200,300);
	line(200,300,200,275);
	line(200,275,400,275);
	line(400,275,400,300);
	line(400,300,450,250);
	line(450,250,400,200);
	line(400,200,400,225);
	line(400,225,325,225);
	line(325,225,325,150);
	line(325,150,350,150);
	line(350,150,300,100);
	line(300,100,250,150);
	line(250,150,275,150);
	line(275,150,275,225);
	line(275,225,200,225);
	delay(5000);
	closegraph();
	return 0;
}
