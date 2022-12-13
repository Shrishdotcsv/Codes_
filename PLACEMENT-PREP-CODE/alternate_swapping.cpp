#include<iostream>
using namespace std;

void alternate_swap(int arr[] , int n)
{
    for(int i = 0; i < n ;i+=2)
    {
        if(i + 1 < n)
        {
            swap(arr[i] , arr[i+1]);
        }
    }
}
void displayarray(int arr[] , int n)
{
    for(int i = 0; i < n ;i++)
    {
        cout<<arr[i]<<"  ";
    }
}
int main()
{
    int arr[6] = { 1 , 3 , 2 , 7 , 11 , 8 };
    int brr[5] = {1 , 3 , 5 ,7 ,9};

    alternate_swap(brr , 5);

    displayarray(brr , 5);
}