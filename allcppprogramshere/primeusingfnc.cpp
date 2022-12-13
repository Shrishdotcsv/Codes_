#include<iostream>
using namespace std;


bool isPrime(int n)
{
 for(int i=2;i<n;i++)
 {
 	if(n%i==0)
     return false;
 
 else
 return true;
}
}
int main()
{
	int num;
	cout<<"enter a number"<<endl;
	cin>>num;
	if(isPrime(num))
	{
		cout<<"number is prime";
			}
			else{
				cout<<"not a prime"<<endl;
			}
}
