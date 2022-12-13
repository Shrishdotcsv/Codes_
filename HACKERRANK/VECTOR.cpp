#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	
	vector<int> n;
	int x,element;
	cin>>x;
	
	for(int i=0;i<x;i++)
	{
//		vector <int> n;
        cin>>element;
		n.push_back(element);
		
	}
	
 	sort(n.begin(),n.end());
	for(int i=0;i<x;i++)
	{
		cout<<n[i]<<" ";
	}
  return 0;
}


