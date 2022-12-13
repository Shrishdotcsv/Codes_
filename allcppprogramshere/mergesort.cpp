//merge sort
#include<iostream>
using namespace std;
void traversal(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
void merge(int arr[],int low,int mid,int high)
{
	int i=low;
	int j=mid+1;
	int k=low;
	int brr[10];
	while(i<=mid&&j<=high)
	{
		if(arr[i]<arr[j])
		{
			brr[k]=arr[i];
		    i++;
		    k++;
		}
	    else{
	    	brr[k]=arr[j];
	    	k++;
	    	j++;
		}
	}
	while(i<=mid)
	{
		brr[k]=arr[i];
		k++;
		i++;
	}
	while(j<=high)
	{
		brr[k]=arr[j];
		k++;
		j++;
	}
	for(int i=low;i<=high;i++)
	{
		arr[i]=brr[i];
	}
	
}
void mergesort(int arr[],int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
		
	}
}
int main()
{
	int arr[]={2,3,5,11,5,74,6};
	int n=7;
	cout<<"elements in the array"<<endl;
	traversal(arr,n);
	mergesort(arr,0,6);
	cout<<"elements in array after sort"<<endl;
	traversal(arr,n);
}
