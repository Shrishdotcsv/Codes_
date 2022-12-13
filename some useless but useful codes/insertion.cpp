#include<iostream>
using namespace std;
void traversal(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
void insertion(int arr[],int size,int capacity,int index,int element)
{
	if(index>=size)
	{
		cout<<"overflow alert!!";
	}
	for(int i=size-1;i>=index;i--)
	{
		arr[i+1]=arr[i];
		
		}
	arr[index]=element;
		cout<<arr[index]<<endl;
}
main()
{
	int arr[100]={1,2,3,4,5,6};
	traversal(arr,6);
		int size=6;
	int index=3;
	int capacity=100;
	insertion(arr,6,100,4,12);
	size++;
	traversal(arr,7);
}
