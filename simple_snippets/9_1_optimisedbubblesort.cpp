//optimised bubble sort
#include<iostream>
using namespace std;
/*void bubblesort(int arr[])
{
	int round=0;
	for(int i=0;i<5;i++)
	{
	round++;
		for(int j=0;j<(5-i-1);j++)
		{
			if(arr[j]>arr[j+1])
			{
			
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		
	}
	cout<<"no.of rounds-> "<<round<<endl;
}
*/
void optbubblesort(int arr[])
{
	int round=0;

	for(int i=0;i<5;i++)
	{
	round++;
        int flag =false;
		for(int j=0;j<(5-i-1);j++)
		{
			if(arr[j]>arr[j+1])
			{
			flag =true;
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		if(flag==false)
		{
			break;
		}
	}
	cout<<"no.of rounds-> "<<round<<endl;
}


int main()
{
	int arr[5];
	cout<<"enterr 5 elements in the array"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"elements in the array before sorting"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	optbubblesort(arr);
	cout<<"elements in the array after bubble sorting"<<endl;
	for(int i=0;i<5;i++)
	{
	cout<<arr[i]<<endl;
	}
	
	
	
}
