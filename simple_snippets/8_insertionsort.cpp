#include<iostream>
using namespace std;
void insertionsort(int arr[])
{
	int j=0;
	int key;
	
	for(int i=1;i<5;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
int main()
{
	int arr[5];
	int num;
	cout<<"enter 5 random elements:"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"before sorting:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	insertionsort(arr);
	cout<<"after insertionsort"<<endl;
	
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	
}
