#include<iostream>
using namespace std;
struct item
{
	int item_no;
	char item_name[20];
	float item_price;
	void input()
	{
		cout<<"enter the item details"<<endl;
		cout<<"\n enter item number";
		cin>>item_no;
		cout<<"\n enter item name";
		cin>>item_name;
		cout<<"\n enter item price";
		cin>>item_price;
	}
	void display()
	{
		cout<<"\n"<<item_no<<" "<<item_name<<" "<<item_price<<endl;
	}
};
main()
{
    item I;
	I.input();
	I.display();	

}

