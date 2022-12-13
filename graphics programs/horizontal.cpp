#include<graphics.h>
int main()
{
	initwindow(640,480);
	int i;
	//line(50,50,300,50);
	//line(50,50,50,300);
	for( i=2;i<=100;i=i+10)
	{
	
	circle(320,240,i);
	delay(50);
}
	getch();
}	
