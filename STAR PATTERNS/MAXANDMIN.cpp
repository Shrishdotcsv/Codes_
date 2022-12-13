#include<iostream>
using namespace std;
int main()
{
	int n;
	int mx=0;
	int mn=12000;
	char ch;
	do
	{
		cin>>n;
		if(n>mx)
		{
			mx=n;			
		}
		if(n<mn)
		{
			mn=n;
		}
		
		cout<<"do you want to continue: ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	
	cout<<"maximum: "<<mx<<endl;
	cout<<"minimum: "<<mn<<endl;
  return 0;
}


