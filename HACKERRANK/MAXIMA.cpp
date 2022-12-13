#include<iostream>
using namespace std;
int maxima(int a,int b,int c,int d)
{
	if(a>b && a>c)
	{
		if(a>d)
		{
			return a;
		}
	}
	else if(b>a && b>c)
	{
		if(b>d)
		{
			return b;
		}
	}
	else if(c>a && c>d)
	
	{
		if(c>b)
		{
			
		return c;
	}
}

else
{
	return d;
}
}
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	cout<<maxima(a,b,c,d);
  return 0;
}


