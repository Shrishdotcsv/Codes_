#include<iostream>
using namespace std;
traversing(int A[],int n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<A[i]<<endl;
		}
	}
void bubblesort(int A[],int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(A[j]>A[j+1])
			{
		   temp=A[j];
		   A[j]=A[j+1];
		   A[j+1]=temp;
		   
		}
	}
}
}
int main()
{
	int A[]={12,3,14,5,4,7,9};
	int n=7;
	cout<<"arrray before sorting "<<endl;
	traversing(A, n);
	bubblesort(A,n);
	cout<<"array after sorting"<<endl;
	traversing(A, n);

}
