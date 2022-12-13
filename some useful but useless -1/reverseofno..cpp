//reverse of number
#include<iostream>
using namespace std;
main()
{
	int num,digit,rev=0;
	cout<<"enter the number";
	cin>>num;
	while(num>0)
	{
	digit=num%10;
	rev=rev*10+digit;
	num=num/10;
	};
	cout<<"reverse of your number is"<<rev<<endl;
	
}
