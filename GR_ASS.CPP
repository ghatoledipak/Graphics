#include<iostream>
#include<graphics.h>
using namespace std;
class draw
{
	public:
	
	void drawline(float x1,float y1,float x2,float y2)
	{
		cout<<"########################## DDA ALGORITHM IMPLEMENTATION######################";
		
	float dx,dy;	
	int len;
	float x,y;	
		
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	if(dx>dy)
	{
		len=dx;
	}else
	{
		len=dy;
	}
	dx=(x2-x1)/len;
	dy=(y2-y1)/len;

	if(dx>0)
	{
	x=(x1+0.5);
	}else
	{
	x=(x1-0.5);
	}
	if(dy>0)
	{
	y=(y1+0.5);
	}else
	{
	y=(y1-0.5);
	}	
	y=(y1+0.5);

	int i=0;
	while(i<len)
	{
		putpixel(x,y,3);
		/*putpixel(x+40,y,3);
		putpixel(x+30,y,3);
		*/		
		x=(x+dx);
		y=(y+dy);
		i++;
		delay(100);
	}
	}

	void drawline(int x1,int y1,int x2,int y2)
		{
cout<<"########################## BLD ALGORITHM IMPLEMENTATION######################";		
	int len;	
	int dx,dy;
	int x,y;
	float m;
		
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	if(dx>=dy)
	{
		len=dx;
	}else
	{
		len=dy;
	}
	
	int i=0;
	int pk;
	

	dx=(x2-x1);
	dy=(y2-y1);
	m=dy/dx;
	x=x1;
	y=y1;
	pk=(2*dy-dx);
	putpixel(x,y,3);
	if(m<1)
	{	

		while(i<len)
		{		
		
		if(pk>=0)
		{
			x=x+1;
			y=y+1;
			putpixel(x,y,3);
			pk=pk+(2*dy)-(2*dx);
		}
		else
		{
			x=x+1;
			y=y;
			putpixel(x,y,3);
			pk=pk+(2*dy);
		}
			i++;
		}
	}else if(m>1)
	{
		while(i<len)
		{		
		putpixel(x,y,3);
		if(pk>=0)
		{
			x=x+1;
			y=y+1;
			putpixel(x,y,3);
			pk=pk+(2*dx)-(2*dy);
		}
		else
		{
			x=x;
			y=y+1;
			putpixel(x,y,3);
			pk=pk+(2*dx);
		}
			i++;
		}
	}else
		{
			while(i<len)
			{		
		
			x=x+1;
			y=y+1;
			putpixel(x,y,3);
			i++;
			}
		}
		
		}

};
	int main()
	{
		int ch;
		int gd=DETECT,gm;
		
		draw d;
		cout<<"\n enter your choice::";
		cout<<"\n 1.DDA :";
		cout<<"\n 2.BLA :";
		cin>>ch;
		switch(ch)
		{
			case 1:	{float x1,y1,x2,y2;
				cout<<"\n enter x1 y1 and x2 y2::";
				cin>>x1>>y1>>x2>>y2;
				initgraph(&gd,&gm,NULL);
				d.drawline(x1,y1,x2,y2);
				break;
				}
			case 2:
				{int x1,y1,x2,y2;	
				cout<<"\n enter x1 y1 and x2 y2::";
				cin>>x1>>y1>>x2>>y2;
				initgraph(&gd,&gm,NULL);
				d.drawline(x1,y1,x2,y2);
				break;
				}
		}
		
		getch();
		closegraph();
		return 0;
	}
