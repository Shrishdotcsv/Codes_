#include<iostream>
using namespace std;
class mult
{
	private:
		int a,b;
		public:
			void setdata(int x,int y)
			{
				a=x;b=y;
			}
			void showdata()
			{
				cout<<"a="<<a<<"b="<<b;
			}
			mult operator++()
			{
				mult shiva;
				shiva.a=a++;
				shiva.b=++b;
				return shiva;
			}
};
main()
{
	mult m1,m2;
	m1.setdata(3,4);
	m2=m1.operator++();
	m2.showdata();
}
