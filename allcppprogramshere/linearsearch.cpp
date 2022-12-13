#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int element)
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
	int arr[]={2,4,6,8,10,12,14,16,18};
	int size=sizeof(arr)/sizeof(int);
	int element;
	cout<<"enter element";
	cin>>element;
	binarysearch(arr,size,element);
   cout<<"result of binary searching is "<<binarysearch(arr,size,element);
   return 0;
   
	
}
