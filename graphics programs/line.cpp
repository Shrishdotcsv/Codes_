#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{
	initwindow(900,500);
	cout<<"your line is as follows"<<endl;
	line(200,210,400,410);
	cout<<"your circle is as follows "<<endl;
	circle(450,450,150);
	getch();
}
