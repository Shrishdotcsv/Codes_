#include<iostream>
#include<climits>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

    long long getMaxArea(long long arr[] , int n)
    {
        vector<int> left,right;
        stack<pair<int,int>>s1,s2;
        int pseudo = -1;
        int pseudo1 = n;
        for (int i = 0; i < n; i++)
        {
            if(s1.empty())
            {
                left.push_back(pseudo);
            }
            else if(s1.top().first < arr[i])
            {
                left.push_back(s1.top().second);
            }
            else if (s1.top().first > arr[i])
            {
                while (s1.size() > 0 && s1.top().first >= arr[i])
                {
                    s1.pop();
                }
                if (s1.size() == 0)
                {
                    left.push_back(pseudo);     
                }
                else
                {
                    left.push_back(s1.top().second);    
                }
            }
            s1.push({arr[i] , i});
        }

        //lets talk about right vector!!!1
        for (int i = n-1; i >= 0 ; i--)
        {
                if (s2.empty())
                {
                    right.push_back(pseudo1);
                }
                else if (s2.top().first < arr[i])
                {
                    right.push_back(s2.top().second);   
                }
                else if (s2.top().first > arr[i])
                {
                    while (s2.size() > 0 && s2.top().first >= arr[i])
                    {
                        s2.pop();   
                    }
                    if (s2.size() == 0)
                    {
                        right.push_back(pseudo1);   
                    }
                    else
                    {
                        right.push_back(s2.top().second);
                    }
                }
                s2.push({arr[i] , i});
            }
            reverse(right.begin(),right.end());
        int width[n];
        for (int i = 0; i < n; i++)
        {
            width[i] = right[i] - left[i]-1;
        }
        int area[n];
        for (int i = 0; i < n; i++)
        {
            area[i] = width[i]*arr[i];
        }
        int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if(area[i] > max)
            {
                max = area[i];
            }
        }
        return max;
}

int main()
{
    long long arr[] = {6,2,5,4,5,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int index = getMaxArea(arr,n);
    cout<<index<<endl;
}