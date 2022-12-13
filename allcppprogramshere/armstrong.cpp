//armstrong
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a number: "<<endl;
	cin>>num;
	int real=num;
	int sum;
	while(num>0)
	{
		int last_digit=num%10;
		sum=sum+pow(last_digit,3);
		num=num/10;
	}
	if(sum==real)
	{
		cout<<"armstrong number:"<<endl;
	}
	else
	{
		cout<<"not armstrong number:"<<endl;
	}
}
