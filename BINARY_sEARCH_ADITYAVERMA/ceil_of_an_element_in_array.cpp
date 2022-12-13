#include<iostream>
using namespace std;
int ceil(int arr[] , int n, int key)
{
    int s = 0;
    int e = n-1;
    int ans= -1;
    while (s<=e)
    {
        int m = s+(e-s)/2;
        if(arr[m] == key)
            {ans = arr[m];}
        else if(arr[m] > key)
            {ans = arr[m];
            e=m-1;}
        else
            {s=m+1;}
        
    }
    return ans;
    
}
int main(){
    int arr[] = {1,2,3,4,8,10};
    int res = ceil(arr,6,3);
    cout<<res<<endl;

}