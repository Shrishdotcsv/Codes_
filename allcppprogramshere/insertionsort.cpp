#include<iostream>
using namespace std;
void traversal(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
	void insertion_sort(int arr[],int size)
	{
		int key=0,j=0;
		for(int i=1;i<size;i++)
		{
			 key=arr[i];
			 j=i-1;
			while(j>=0&&key<arr[j])
			{
				arr[j+1]=arr[j];
				j--;
				
			}
			arr[j+1]=key;
		}
	}
int main()
{
	int arr[]={12,54,65,7,23,9};
	int size=6;
	cout<<"simple traversing "<<endl;
	traversal(arr,size);
	insertion_sort(arr,size);
	cout<<"traversing after insertion sort "<<endl;
	traversal(arr,size);
	
}
