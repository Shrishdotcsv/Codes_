//quick sort
#include<iostream>
using namespace std;
traversal(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int partition(int arr[],int low,int high)
{
	int pivot=arr[low];
	int i=low+1;
	int j=high;
	int temp;
	do{
	
	while(arr[i]<=pivot)
	{
		i++;
	}
	while(arr[j]>pivot)
	{
		j--;
	}
	if(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	}while(i<j);
	temp=arr[low];
	arr[low]=arr[j];
	arr[j]=temp;
	return j;
}
void quick_sort(int arr[],int low,int high)
{
	int partitionindex;
	if(low<high)
	{
		partitionindex=partition(arr,low,high);
		quick_sort(arr,low,partitionindex-1);
		quick_sort(arr,partitionindex+1,high);
    }
}
int main()
{
	int arr[]={2,1,6,33,9,8};
	int n=6;
	cout<<"elements of array:"<<endl;
	traversal(arr,n);
	quick_sort(arr,0,n-1);
	cout<<"elemnts of array after sorting "<<endl;
	traversal(arr,n);
}
