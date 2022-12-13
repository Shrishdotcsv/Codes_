#include<bits/stdc++.h>
using namespace std;
int binary_search_min_diff(int arr[] , int n,int key)
{
    int low = 0;
    int high = n-1;
    while (low <= high)
    {
        int mid = low+(high-low)/2;
        if(arr[mid] == key){
            return arr[mid];
        }
        else if(arr[mid] > key){
            high = mid - 1;
        }
        else
        {
            low = mid+1;
        }
    }
    // int x = abs();
    // int y = abs();

    return min(arr[low] - key,arr[high] - key);
    
}
int main()
{
    int arr[] = {2,4,8,10,14,17};
    int  n = sizeof(arr)/sizeof(arr[0]);
    int ans = binary_search_min_diff(arr,n,12);
    cout<<ans<<endl;

}