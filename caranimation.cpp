#include<iostream>
#include<graphics.h>

using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	setbkcolor(RED);
	
	
	for(int i=0;i<420;i++)
	{
	
	setcolor(BLACK);
	line(0,267,650,267);
	
	line(0+i,150,5+i,200);
	line(0+i,150,100+i,150);
	line(100+i,150,105+i,125);
	line(105+i,125,0+i,150);
	line(105+i,125,250+i,100);
	line(250+i,100,400+i,175);
	line(400+i,175,400+i,200);
	line(400+i,200,380+i,220);
	line(380+i,220,380+i,200);
	line(380+i,200,360+i,190);
	line(360+i,190,320+i,190);
	line(320+i,190,300+i,200);
	line(300+i,200,300+i,220);
	line(300+i,220,105+i,220);
	line(105+i,220,105+i,200);
	line(105+i,200,85+i,190);
	line(85+i,190,45+i,190);
	line(45+i,190,25+i,200);
	line(25+i,200,25+i,220);
	line(25+i,220,5+i,200);
	
	line(104+i,135,250+i,110);
	line(250+i,110,325+i,150);
	line(325+i,150,100+i,150);
	line(250+i,110,250+i,150);
	
	circle(65+i,230,37);
	circle(65+i,230,30);
	circle(65+i,230,15);
	circle(65+i,230,5);
	
	circle(340+i,230,37);
	circle(340+i,230,30);
	circle(340+i,230,15);
	circle(340+i,230,5);
	
	floodfill(340+i,230,BLACK);
	floodfill(340+i,195,BLACK);
	floodfill(65+i,230,BLACK);
	floodfill(65+i,195,BLACK);
	
	floodfill(250+i,180,BLACK);
	
	delay(20);
	
	cleardevice();
	}
	
	getch();
	closegraph();

}
