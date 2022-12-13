//linearsearch
#include<iostream>
using namespace std;
int  LinearSearch(int arr[],int size,int element)
{
	for(int i=0;i<size;i++)
	{
	    if(arr[i]==element)
	    {
	    	return i;
		}
	}
	return -1;
}
int BinarySearch(int arr[],int size,int element)
{
	int low,mid,high;
	low=0;
	high=size-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==element)
		{
			return mid;
			
		}
		if(arr[mid]<element)
		{
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return -1;
}
main()

{
	int arr[]={12,13,23,111,134,144,153,155,163};\
	int size=sizeof(arr)/sizeof(int);
	int element;
	cout<<"enter element";
	cin>>element;
	cout<<"the binary search result is :"<<BinarySearch(arr,size,element);
}
