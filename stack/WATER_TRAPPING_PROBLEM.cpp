#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int water_trapping(int arr[] , int n)
{
    int MAXL[n];
    int MAXR[n];
    MAXL[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        MAXL[i] = max(MAXL[i-1] , arr[i]);
    }
    MAXR[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        MAXR[i] = max(MAXR[i+1] , arr[i]);
    }

    int water[n];
    for (int i = 0; i < n; i++)
    {
        water[i] = min(MAXL[i] , MAXR[i]) - arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + water[i];
    }

    return sum;
}
int main()
{
    int arr[] = {3,0,0,2,0,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int water_level = water_trapping(arr,n);
    cout<<water_level<<endl;
} 