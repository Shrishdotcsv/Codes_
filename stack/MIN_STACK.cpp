#include<stack>
#include<iostream>
using namespace std;

class stacks
{
    public:
    stack<int> s;
    stack<int> ss;
    void push(int ele)
{
    s.push(ele);
    if (ss.empty() || ss.top() > ele)
    {
        ss.push(ele);
    }
    return;
    
}
int pop()
{
    if (s.empty())
    {
        return -1;  
    }
    int ans = s.top();
    if (ss.top() == ans)
    {
        ss.pop();   
    }
    return ans;
}

int get_min()
{
    if (ss.size() == 0)
    {
        return -1;  
    }
    return ss.top();
}

};
int main()
{
    stacks s; 
    s.push(3);
    s.push(5);
    s.get_min();
    s.push(2);
    s.push(1);
    s.get_min();
    s.pop();
    s.get_min();
    s.pop();
    
}