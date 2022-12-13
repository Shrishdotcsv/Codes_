#include<iostream>
using namespace std;

int first_occurence(int arr[] , int n , int ele)
{
    int start = 0;
    int end = n-1;
    int res = 0;

    while (start<=end)      
    {
        /* code */
        int mid = start+(end - start)/2;
        if(ele == arr[mid])
        {
            res = mid;
            end = mid-1;
        }
        else if(ele > arr[mid])
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }

        
    }
    return res;
    
}

int last_occurence(int arr[] , int n , int ele)
{
    int start = 0;
    int end = n-1;
    int res = 0;

    while (start<=end)      
    {
        /* code */
        int mid = start+(end - start)/2;
        if(ele == arr[mid])
        {
            res = mid;
            start = mid+1;
        }
        else if(ele > arr[mid])
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }

       
    }
     return res;
    
}

int main()
{
    int arr[] = {2,4,10,10,10,18,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ele = 10;
    cout<<"first_occurence "<<first_occurence(arr,n,ele)<<endl;
    cout<<"last_occurence "<<last_occurence(arr,n,ele)<<endl;
    
}