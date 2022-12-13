#include<iostream>
using namespace std;
int binary_search(int arr[] , int low , int high,int key)
{
    while (low <= high)
    {
        int mid = low + (high-low)/2;

        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            return binary_search(arr , low , mid-1,key);
        }
        else{
            return binary_search(arr,mid+1,high,key);
        }

    }
    return -1;
    
}

int find_pos_infin_arr(int arr[],int n ,int key)
{
   int a = 0;
   int b = 1;

    while (key > arr[b] )
    {
        
            a = b;
            b = b*2;
    }
    return binary_search(arr,a,b,key);
}

int main()
{
    int arr[] = {45,123,321,432,444,542,654,765,876,999,2344,54334};
    int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<n<<endl;
    int c = find_pos_infin_arr(arr,n,542);
    cout<<c<<endl;

}