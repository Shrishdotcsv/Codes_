#include<iostream>
using namespace std;
int First_occ(int arr[] , int n , int target)
{
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while (s<=e)
    {
        if(arr[mid] == target)
        {
            ans = mid;
            e = mid -1;
        }
        else if(arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
int Last_occ(int arr[] , int n , int target)
{
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while (s<=e)
    {
        if(arr[mid] == target)
        {
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[10] = {2,4,5,6,8,8,8,8,8,8};
    cout<<"the first occurence of 8 is at index "<< First_occ(arr , 10 , 8) <<endl;
    cout<<"the last occurence of 8 is at index "<< Last_occ(arr , 10 , 8) <<endl;
}