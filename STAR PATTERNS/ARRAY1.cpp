#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int maximum=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>maximum)
		{
			maximum=a[i];
		}
	}
	cout<<"maximum elemenet is: "<<maximum<<endl;
  return 0;
}


