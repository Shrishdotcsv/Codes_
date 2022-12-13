#include<iostream>
using namespace std;
int binary_search(int arr[] , int n , int target)
{
    int low = 0;
    int high = n-1;
    

    while (low<=high)
    {
        int mid = low + ((high-low)/2); //best optimise way to find minimim which donnot cross int limit

        if(arr[mid] == target)
        {
            return mid;
        }

        else if(arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid+1;
        }
        
    }
    return -1;
}
int main()
{
    int arr[] = {1,23,45,66,67,89,567,890};
    int n = 8;
    int index = binary_search(arr ,  8 , 65); //output should be 5
    cout<<index<<endl;
}