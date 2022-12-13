#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int i=0,mx=arr[0];
	for( i=1;i<n;i++)
	{
		if(arr[i]>arr[0])
		{
			mx=arr[i];
		}
	}
	cout<<"max: "<<mx<<endl;
  return 0;
}


