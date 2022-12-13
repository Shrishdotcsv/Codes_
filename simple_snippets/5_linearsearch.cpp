#include<iostream>
using namespace std;

void linearsearch(int arr[],int element)
{
int temp=-1;
for(int i=0;i<5;i++)
{
	if(arr[i]==element)
	{
		cout<<"element found at index ->"<<i<<endl;
		temp=0;
	}
	}
	if(temp==-1)
	{
		cout<<"element is not in the array"<<endl;
		}	
}

int main()
{
	int arr[5];
	cout<<"please enter 5 element of array"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"please enter a element to search"<<endl;
	int num;
	cin>>num;
	linearsearch(arr,num);
	
	return 0;
}
