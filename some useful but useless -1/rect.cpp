#include<iostream>
using namespace std;
int perimetre(int,int);
float perimetre(int);
int main()
{
	int r,l,b;
	cout<<"enter radius of circle";
	cin>>r;
	cout<<"perimeter of circle is:"<<perimetre(r)<<endl;
	cout<<"enter length of rectangle";
	cin>>l;
	cout<<"enter breadth of rectangle";
	cin>>b;
	cout<<"perimetre of rectangle is"<<perimetre(l,b)<<endl;
	
}
float perimetre(int z)
{
	return 2*3.14*z;
}
int perimetre(int x,int y)
{
	return 2*(x+y);
}
