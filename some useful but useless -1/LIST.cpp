#include<list>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	list <char> l;
	l.push_back('s');
	l.push_back('h');
	l.push_back('r');
	l.push_back('i');
	l.push_back('s');
	l.push_back('h');
	
	list <char>::iterator it=l.begin();
	
	for( it=l.begin();it!=l.end();it++)
	{
		cout<<*it;
	}
	
  return 0;
}


