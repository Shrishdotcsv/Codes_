#include<iostream>
using namespace std;
int natural(int n)
{
	if(n==0)
	{
		return 0;
	}
	return n+natural(n-1);
}
int main()
{
	cout<<natural(10);
  return 0;
}


