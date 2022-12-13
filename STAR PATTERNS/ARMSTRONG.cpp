#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int temp=n;
	int s=0;
	while(n>0)
	{
		int x=n%10;
		s+=pow(x,3);
		n/=10;
	}
	
	
	if(s==temp)
	{
		cout<<"armstrong!!"<<endl;
	
	}

  return 0;
}


