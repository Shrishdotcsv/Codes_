#include<iostream>
using namespace std;

/*int FACT(int num){

	int fact=1;
	for(int i=1;i<=num;++i)
	{
		fact*=i;
	}

	cout<<fact;
}
int main()
{
	int num;
	cin>>num;
	
FACT(num);

}
*/
int factorial(int num)
{
	if(num==0)
	return 1;
	return num*factorial(num-1);
}
int main()
{
	int num;	
	cin>>num;
	cout<<"the factorial of your number is: "<<factorial(num);
	return 0;
}


