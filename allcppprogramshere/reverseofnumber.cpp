#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a number: "<<endl;
	cin>>num;
	int rev;
	while(num>0)
	{
		int last_digit=num%10;
		rev=rev*10+last_digit;
        num=num/10;
	}
	cout<<rev<<endl;
}
