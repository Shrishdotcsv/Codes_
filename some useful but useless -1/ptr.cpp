#include<iostream>
using namespace std;
main()
{
	int a=20;
	int* ptr=&a;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	int* p= new int(100);
    cout<<*p<<endl;
    int* arr= new int[4];
    arr[0]=12;
    arr[1]=13;
    arr[2]=14;
    arr[3]=15;
    delete [] arr;
    cout<<"value at arr[0] is "<<arr[0]<<endl;
    cout<<"value at arr[1] is "<<arr[1]<<endl;
    cout<<"value at arr[2] is "<<arr[2]<<endl;
    cout<<"value at arr[3] is "<<arr[3]<<endl;
}
