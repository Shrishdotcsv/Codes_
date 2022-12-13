#include<iostream>
using namespace std;
int search_rot(int arr[],int n)
{
    int low = 0;
    int high = n-1;
    while (low<=high)
    {
        if (arr[low] <= arr[high]) {
            return low;
        }
        int mid = low+(high-low)/2;
        int next = (mid+1)%n;
        int prev = (mid-1+n)%n;

        if(arr[mid] <= arr[next] && arr[mid] <= arr[prev])
        {
            return mid;
        }
        else if(arr[low]<=arr[mid])
        {
            low = mid+1;
        }
        else if(arr[mid] <= arr[high])
        {
            high = mid-1;
        }

      
    }
    return -1;
    
}
int main()
{
    // int arr[] = {2,5,7,8,9,11};
    int rot_Arr[] = {8,9,11,2,5,7}; //this is rotated array of arr!!
    int pivot = search_rot(rot_Arr,6);
    cout<<"number of rotations: "<<pivot<<endl;

}
