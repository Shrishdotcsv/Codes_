#include<iostream>
using namespace std;
int binary_Search(int arr[] , int low , int high ,int key){
    int ans = -1;
    while (low<=high)
    {
        int mid = low+(high-low)/2;
        if(arr[mid] == key) {ans = mid;
        high = mid-1;}
        if(arr[mid] > key) { 
            ans = mid ; 
        high = mid-1;
        }
        else {low = mid+1;}
 
    }
    return ans;
   
    
}




int main()
{
    int arr[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    int ans = binary_Search(arr,0,n-1,1);
    cout<<ans<<endl;

}