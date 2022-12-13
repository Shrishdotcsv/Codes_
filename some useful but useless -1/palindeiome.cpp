#include<iostream>
using namespace std;
int main()
{
	int num,digit;
	int rev=0;
	cout<<" enter a number: ";cin>>num;
	int n;
	n=num;
	while(num!=0)
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}
	if(rev==n)
	{
		cout<<"palindrome";
	}
	else{
	
	cout<<"not palindrome";
}
}
