#include<iostream>
using namespace std;
bool mult(int n)
{
	if(n%3==0)
	return true;
	else
	return false;
}
int main()
{
	int q;
	cout<<"enter a number: ";
	cin>>q;
	if(mult(q))
	{
		cout<<"it  is a multiple of 3 "<<endl;
	}
	else{
		cout<<"not a multiplr of 3"<<endl;
	}
}
