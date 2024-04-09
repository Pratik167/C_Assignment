#include<stdio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	line(300,100,400,150);
	line(400,150,425,250);
	line(425,250,375,350);
	line(375,350,225,350);
	line(225,350,175,250);
	line(175,250,200,150);
	line(200,150,300,100);
	delay(5000);
	closegraph();
	return 0;
}
