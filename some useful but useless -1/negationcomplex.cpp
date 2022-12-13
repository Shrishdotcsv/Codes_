//unary operator overloadig
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
			
			
			complex operator-()
			{
				complex temp;
				temp.a=-a;
				temp.b=-b;
				return temp;
			}
		};
			main()
			{
				complex c1,c2;
				c1.setdata(10,11);
				c2=c1.operator-();
				c2.showdata();
			}
