#include<iostream>
using namespace std;
int reverse(int n)
{
	int digit,rev=0;
	while(n!=0)
	{
		digit=n%10;
		rev=(rev*10)+digit;
		n=n/10;
	}
	cout<<rev;
}
int main()
{
	reverse(2326);
  return 0;
}


