#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s)
{
	int n=s.size();
	stack <char> st;
	bool ans =true;
	for(int i=0;i<n;i++)
	{
	
	if(s[i]=='(' or s[i]=='{' or s[i]=='[')
	{
		st.push(s[i]);
	}
	else if(s[i]==')')
	{
		if(!st.empty() && st.top()=='(')
		{
			st.pop();
		}
		else
		{
			ans = false;
		//cout<<"string is not balanced!"<<endl;
		break;
	}}
	else if(s[i]==']')
	{
		if(!st.empty() && st.top()=='[')
		{
			st.pop();		
		}
	else{
	     ans= false;
	//cout<<"string is not balanced!"<<endl;
	break;
    }
}
	else if(s[i]=='}')
    {
    	if(!st.empty() && st.top()=='{')
    	{
    		st.pop();
		}
		else{
		ans= false;
		break;
		//cout<<"string is not balanced!"<<endl;
	}}
}

if(!st.empty())
{
	return false;
 //cout<<"not balanced string "<<endl;	
}
else{
	return ans;
	//cout<<"string was balanced "<<endl;
}
}

int main()
{
	string S="[({})]";

	if(isValid(S))
	{
		cout<<"valid string"<<endl;
    }
    else{
    	cout<<"invalid string"<<endl;
	
	}}
      
