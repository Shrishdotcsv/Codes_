#include<graphics.h>
int main()
{
	initwindow(640,480);
	//arc(150,150,0,180,50);
	//setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
    circle(250,150,50);
	floodfill(250,150,WHITE);
	getch();
}
