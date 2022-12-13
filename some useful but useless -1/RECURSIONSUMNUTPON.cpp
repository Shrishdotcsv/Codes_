//sum of N natural numbers using recursion
#include<iostream>
using namespace std;
int sumupton(int n)
{
	for(int i=0;i<n;i++)
	{
	   return n+ sumupton(n-i);
    }
}
int main()
{
	int num;
	cin>>num;
	
  return 0;
}


