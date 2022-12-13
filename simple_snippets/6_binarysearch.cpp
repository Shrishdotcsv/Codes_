#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int element)
{
	int low,high,mid;
	low=0;
	high=size-1;
	while(low<=high){
		mid=(high+low)/2;
		if(arr[mid]==element)
		{
			return mid;
		}
		if(arr[mid]<element)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
}
int main()
{
	int arr[10];
	int num;
	cout<<"enter 10  sorted elements of an array "<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter a number you want to search"<<endl;
	cin>>num;
	

	cout<<"the result of binary search is->"<<	binarysearch(arr,10,num);
}
