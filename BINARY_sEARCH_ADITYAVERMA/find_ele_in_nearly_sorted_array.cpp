#include<iostream>
using namespace std;
int searchInNearlySortedArray(int arr[] , int n , int key)
{
    int start = 0;
    int end = n-1;
    
    while (start<=end)
    {
        int mid = start+(end-start)/2;
        if(arr[mid] ==key){
            return mid;
        }
        if(mid-1 < end &&  key == arr[mid+1])
        {
            return mid+1;
        }
        if(mid+1 >start && key == arr[mid-1])
        {
            return mid-1;
        }
        if(arr[mid+1] > key)
        {
            end = mid-2;
        }
        else {
            start = mid+2;
        }
    }
    
}
int main()
{
    int arr[] = {5,10,30,20,40};
    // int size = sizeof(arr)/sizeof(arr[0]);
 cout<< searchInNearlySortedArray(arr,5,10s); //4
    // cout<<size<<endl;
    // cout<<"40 at index: "<<index<<endl;
} 