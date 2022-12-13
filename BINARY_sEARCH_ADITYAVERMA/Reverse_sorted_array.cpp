// also called as Order Agnostic Search
#include<iostream>
using namespace std;
int reverse_bs(int arr[] , int n , int key)
{
    int start = 0;
    int end = n-1;

    while (start <= end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }

    return -1;
    
}
int main()
{
    int arr[] = {345 , 245 , 226 , 89 , 67 , 65 , 45 , 13 , 1};
    int size = 9;

    int index = reverse_bs(arr , 9 , 45);
    cout<<index<<endl;
}