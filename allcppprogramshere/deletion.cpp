#include<iostream>
using namespace std;
void traversal(int arr[],int n )
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
void deletion(int arr[],int index,int size)
{
	for(int i=index;i<size-1;i++)
	{
		arr[i]=arr[i+1];
	}
}
main()
{
	int arr[100]={10,11,12,13,14,15};
	traversal(arr,6);
    int size=6;
    int index=2;
    size=size-1;
    deletion(arr,2,6);
    cout<<endl;
    traversal(arr,5);
}


