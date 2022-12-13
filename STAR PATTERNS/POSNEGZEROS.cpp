#include<iostream>
using namespace std;
int main()
{
	int n;
int pos=0;
int neg=0;
int zeros=0;
char ch;
	do
	{
		cin>>n;
		if(n>0)
		{
			pos++;
		}
		else if(n<0)
		{
			neg++;
		}
		else
		{
			zeros++;
		}
		
		cout<<"do you want to continue: ";cin>>ch;
		
	}while(ch=='y'||ch=='Y');
	
	
	cout<<"positive: "<<pos<<endl;
	cout<<"negative: "<<neg<<endl;
	cout<<"zeros: "<<zeros<<endl;
  return 0;
}


