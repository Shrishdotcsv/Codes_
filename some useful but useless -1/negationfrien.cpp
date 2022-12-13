//friend function part 4
#include<iostream>
using namespace std;
class complex{
	private:
		int a,b;
    public:
    	void setdata(int x,int y)
    	{
    		a=x;
    		b=y;
		}
		void showdata()
		{
			cout<<"a="<<a<<"b="<<b;
		}
		friend complex operator-(complex);
};
complex operator-(complex X)
{
	complex temp;
	temp.a=-X.a;
	temp.b=-X.b;
	return temp;
}
main()
{
	complex c1,c2;
	c1.setdata(10,11);
	c2=operator-(c1);
	c2.showdata();
}
