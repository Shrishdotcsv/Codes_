#include<iostream>
using namespace std;
int first(int arr[] , int n,int key)
{
    int start = 0;
    int end = n-1;
    int ans = -1;

    while (start<=end)
    {
        int mid = start+(end-start)/2;
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid] > key)
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }        
}
    return ans;
    
}

int last(int arr[] , int n , int key)
{
    int start = 0;
    int end = n-1;
    int ans = -1;
    while (start<=end)
    {
        int mid = start+(end-start)/2;
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid] > key)
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }

    return ans;
    
}
int main()
{
    int arr[] = {2,3,4,5,5,5,5,6,7};
    int n=9;
    int index = first(arr,9,5);
    int bindex = last(arr,9,5);
    cout<<"first: "<<index<<endl;
    cout<<"last: "<<bindex<<endl;

}