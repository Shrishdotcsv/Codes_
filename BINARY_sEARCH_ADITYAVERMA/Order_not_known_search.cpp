#include<iostream>
using namespace std;
int binary_Search(int arr[] , int low ,int high , int key)
{
    bool isAsc = arr[low] <  arr[high];
    while (low<=high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(isAsc == true)
        {
            if(arr[mid] > key)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }

        else
        {
            if(arr[mid] > key)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
    }
    return -1;
    
}
int main()
{
    int arr[] = {56,67,78,89,90};
    int brr[] = {678,666,589,476,345,234,123,23,9};
    int m = 9;
    int n = 5;
    int bindex = binary_Search(brr,0,8,234);
    int index = binary_Search(arr,0,4,89); // output should be 3
    cout<<"Descending: "<<bindex<<endl;
    cout<<"Ascending: "<<index<<endl;
}