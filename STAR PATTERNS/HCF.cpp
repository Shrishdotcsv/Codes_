#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cin>>n1>>n2;
	int rem=0;
	int hcf;
	
	while(rem!=0)
	{
		rem=n1%n2;
		if(rem==0){
			hcf=n2;
		}
		else
		{
			n1=n2;
			n2=rem;
		}
	}
	cout<<hcf;
}

