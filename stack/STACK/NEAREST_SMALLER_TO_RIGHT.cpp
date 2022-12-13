#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
int main()
{
    int arr[]={4,5,2,10,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int>v;
    stack<int>s;
    for (int i = n-1; i >= 0; i--)  
    {
        if (s.empty())
        {
               v.push_back(-1); 
        }
        else if (s.top() < arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.top() >= arr[i])
        {
            while (s.size() > 0 && s.top() >= arr[i])
            {
                s.pop();
            }
            if (s.size() == 0)
        {
            v.push_back(-1);
        }
        else
        {
            v.push_back(s.top());
        }
            
        }
    s.push(arr[i]);
 }
     vector<int> :: iterator it = v.begin();
    reverse(v.begin(),v.end());
    for (auto it: v)
    {
        cout<<(it)<<" ";
    }
    
    
}