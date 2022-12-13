#include<iostream>
using namespace std;
int sumupto(int num)
{
	double sum=0;                   //1 microsecond
	for(int i=1;i<=num;i++)      //1 microsecond
	{
		sum+=i;                  //depends on  value of n(n microsec)
	}
	cout<<sum;                   //1 microsec
}     
/*                                                                           
int main()
{                                          /*so  lets add all the times to determine the total tine of this program
                                               T=1+1+1+n(sec)            1 are constants
	long long sum=0,num;
	cin>>num;
	for(int i=0;i<=num;i++)
	{
		sum+=i;
		
	}
	cout<<sum;
	
	sumupto(7);
*/

void uptosum(double n)
{ 
	double sum=(n*(n+1))/2;               //suppose it takes 3 ms
	cout<<sum;                          //it takes 2 ms
}                                        // no matter how big your input is it only take T time where T = 3+2 =5ms;
int main()
{
   double num;
	cout<<"enter the number you want sum upto :->  ";
	cin>>num;
	uptosum(num);               
  return 0;
}


