//currency converter cpp
#include<iostream>
using namespace std;
main()
{
	int rupees;
	float dollar,pound,dirham,yuan;
	cout<<"enter some amount in rupees::";cin>>rupees;
	dollar=rupees/74.45;
	cout<<rupees<<" indian rupees is equal to: "<<dollar<<" usd"<<endl;
	pound=rupees/102.28;
	cout<<rupees<<" indian rupees is equal to: "<<pound<<" pound"<<endl;
	dirham=rupees/20.27;
	cout<<rupees<<" indian rupees is equal to: "<<dirham<<" dirham"<<endl;
	yuan=rupees/11.50;
	cout<<rupees<<" indian rupees is equal to: "<<yuan<<" yuan";
	
}
