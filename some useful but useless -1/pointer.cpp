#include<iostream>
using namespace std;
class Box{
	int l,b,h;
     public:
     	void setdimensions(int x,int y,int z)
     	{
     		l=x;
     		b=y;
     		h=z;
		 }
		 void showdimensions()
		 {
		 	cout<<"\n l="<<l<<"b="<<b<<"h="<<h;
		 }
		 
};
main()
{
	Box *p,smallbox;
	p=&smallbox;
	p->setdimensions(121,22,1221);
	p->showdimensions();
}
