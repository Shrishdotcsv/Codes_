#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,3,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if(s.empty())
        {
            v.push_back(-1);
        }
        else if(s.top()>arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.top() < arr[i])
        {
            while (s.size()>0 && s.top()<=arr[i])
            {
                s.pop();
            }

            if(s.size() == 0)
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
    for (auto it : v)
    {
        cout<<it<<" ";
    }
    
  
}
