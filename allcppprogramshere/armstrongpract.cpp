#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int  num;
	cout<<"enter a number:";
	cin>>num;
	int real=num;
	int sum;
	while(num>0)
	{
		int last_digit=num%10;
		sum=sum+pow(last_digit,3);
		num=num/10;
	
	}
	
	if(real==num)
	{
		cout<<"armstrong "<<endl;
	}
	else{
		cout<<"not armstrong"<<endl;
	}
}
