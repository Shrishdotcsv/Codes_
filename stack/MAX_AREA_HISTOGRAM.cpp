#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
    int flag = 7;
    int arr[] = {6,2,5,4,5,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    stack<pair<int,int>> s;
    for (int i = n-1; i >= 0; i--)
    {
        if (s.empty())
        {
            v.push_back(flag);
        }
        else if (i == n-1)
        {
            v.push_back(n);
        }
        else if (s.top().first < arr[i])
        {
            v.push_back(s.top().second);
        }
        else if (s.top().first >= arr[i])
        {
            while (s.size() > 0 && s.top().first >= arr[i])
            {
                s.pop();
            }
            if (s.size() == 0)      
            {
                v.push_back(flag);
            }
            else 
            {
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i] , i});
    }
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = i-v[i];
    }
    
    vector<int> :: iterator it = v.begin();
    reverse(v.begin(),v.end());
    for(auto it : v)
    {
        cout<<(it)<<" ";
    }
    
    
}