#include<iostream>
using namespace std;
void takinginputinarray(int arr[] , int n){
    for(int i = 0 ;i < n ; i++)
    {
        cin>>arr[i];
    }
}
void printarray(int arr[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

// int extractingsizeofthearray(int arr[])
// {
//     int size = sizeof(arr)/sizeof(int);
//     return size;
// }
int main()
{
    int n;
    cin>>n;

    int arr[n];
    takinginputinarray(arr,n);
    printarray(arr,n);
}