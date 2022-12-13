#include<set>
#include<iostream>
using namespace std;
int main()
{
	set<int>s;
	int n=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int y=0,x=0;
		cin>>y>>x;
		if(y==1)
		{
			s.insert(x);
	    }
	    
	    else if(y==2)
	    {
	    	s.erase(x);
		}
		else
		{
			set<int>::iterator iter=s.find(x);
			if(iter==s.end())
			{
				cout<<"no"<<endl;
			}
			else
			{
				cout<<"yes"<<endl;
			}
		}
	}
  return 0;
}


