#include<iostream>
using namespace std;
int binarySearch(int arr[],int low,int high,int key)
{
    int mid = low+(high-low)/2;
    while (low<=high)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            return binarySearch(arr,0,mid-1,key);
        }
        else
        {
            return binarySearch(arr,mid+1,high,key);
        }
    }
    return -1;
    
}
int Findpivot(int arr[],int low,int high)
{
    
    int mid = low+(high-low)/2;
    // int next = (mid+1)%n;
    // int prev = (mid+1-n)%n;
    if(arr[low]<=arr[high])
    {
        return low;
    }
    else if(arr[mid] <= arr[mid+1] && arr[mid] <=arr[mid-1])
    {
        return mid;
    }
    else if(arr[low] <= arr[mid])
    {
        return Findpivot(arr,mid+1,high);
    }
    else if(arr[mid] <= arr[high])
    {
        return Findpivot(arr,low,mid-1);
    }
}
int findkeyindex(int arr[],int n,int key)
{
    int flag = Findpivot(arr,0,n-1);
    if(flag == -1)
    {
        return binarySearch(arr,0,n-1,key);
    }

    if(arr[flag] == key)
    {
        return flag;
    }

    if(arr[0] <= key)
    {
        return binarySearch(arr,0,flag-1,key);
    }
    else
    {
        return binarySearch(arr,flag+1,n-1,key);
    }
}
int main()
{
    int arr[]={8,9,11,2,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key =5;

    cout<<"the index of the 5 is "<<findkeyindex(arr,n,key);
    // int arr[] ={2,5,7,8,9,11};
    // int final = binarySearch(arr,0,5,9);
    // cout<<final<<endl;

    // int pivot = Findpivot(arr,0,5);
    // cout<<pivot<<endl;
} 