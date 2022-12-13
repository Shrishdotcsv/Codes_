#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
    int arr[] = {100,80,60,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    stack<pair<int,int>> s;
    for (int i = 0; i < n; i++)
    {
        if (s.empty())
        {
            v.push_back(-1);
        }
        else if (s.top().first > arr[i])
        {
            v.push_back(s.top().second);
        }
        else if (s.top().first < arr[i])
        {
            while (s.size()>0 && s.top().first <= arr[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
     }
    
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = i - v[i];
    }

    vector<int>::iterator it = v.begin();
    for(auto it : v)
    {
        cout<<(it)<<" ";
    }
    

    
}