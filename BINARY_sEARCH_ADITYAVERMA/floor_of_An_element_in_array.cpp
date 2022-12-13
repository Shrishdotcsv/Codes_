#include<iostream>
using namespace std;
int flooor(int arr[] , int n , int key)
{
    int s = 0;
    int e = n-1;
    int res=-1;
    while (s<=e)
    {
        int m = s+(e-s)/2;
        if(arr[m] == key)
        {
            res = arr[m];
        }
        else if (arr[m] < key)
        {
            res = arr[m];
            s=m+1;
        }
       else
       {
           e = m-1;
       }
       

    }
    return res;
    
    
}
int main()
{
    int arr[] = {1,2,3,4,8,10};
    int floor = flooor(arr,6,9);
    cout<<floor;
    
}