//friend function part 3
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
		friend complex  operator+(complex,complex);;
};
complex operator+(complex X,complex Y)
{
	complex temp;
	temp.a=X.a+Y.a;
	temp.b=X.b+Y.b;
	return temp;
}
main()
{
	complex c1,c2,c3;
	c1.setdata(2,3);
	c2.setdata(3,4);;
	c3=operator+(c1,c2);
	c3.showdata();
	
	
	}

