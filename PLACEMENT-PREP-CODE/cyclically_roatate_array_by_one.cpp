#include<iostream>
using namespace std;
int* cyclic_rotation(int arr[] , int n)
{
    int temp = arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]= arr[i-1];
    }
    arr[0]  = temp;

    return arr;
}

void display(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
 int a[5]= {1,2,3,4,5};
 cyclic_rotation(a,5);
 display(a,5);
 

}