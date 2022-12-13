#include<iostream>
using namespace std;
class S{
	private:
		int a,b;
		public:
			void setdata(int x,int y)
			{
				a=x;
				b=y;
			}
			friend void fun(S);
};
void fun(S sub1,S sub2)
{
	S sub,mod;
	if(sub1>sub2)
	{
		sub=sub1-sub2;
		
		cout<"subtraction is:"<<sub;
	}
	else
	{
		sub=sub1-sub2;
		mod=-sub;
		cout<<mod;
	}

}
main()
{
	S s1,s2;
	s1.setdata(10,11);
	s2.setdata(11,12);
	fun(s1,s2)
}
