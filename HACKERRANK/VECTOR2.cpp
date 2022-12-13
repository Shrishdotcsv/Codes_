#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
	vector<int> v1;
	int x,element;
	cin>>x;
	
	for(int i=0;i<x;i++)
	{
		cin>>element;
		v1.push_back(element);
	}
	
//	for(int i=0;i<x;i++)
//	{
//		cout<<v1[i]<<"  ";
//	}
//	cout<<endl;
	
	int q1,q2,q3;
	cin>>q1;
	cin>>q2>>q3;

	v1.erase(v1.begin()+q1-1);
	v1.erase(v1.begin()+q2-1,v1.begin()+q3-1);
	
	
	cout<<v1.size()<<endl;
	
//    cout<<endl;	
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<"  ";
	}	
	
  return 0;
}


