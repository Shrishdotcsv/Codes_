#include<iostream>
using namespace std;
int main()
{
	int n ;
	cin>>n;
	bool flag= false;

		for(int i=2;i<n;i++)
		{
			if(n%i==0)
			{
				flag=true;
				break;
//				cout<<i<<" :"<< "not prime"<<endl;
			}
       }
if(flag==false && n>1)
      {
	cout<<"number is prime!!"<<endl;
      }
else
     {
     	cout<<"not a prime number!!"<<endl;
	 }
}



