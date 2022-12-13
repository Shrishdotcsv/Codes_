#include<iostream>
using namespace std;
struct student{
	int age;
	string first;
	string last;
	int std;
	
//	cin>>age>>firsr>>last>>std;
};
int main()
{
	student st;
	cin>>st.age>>st.first>>st.last>>st.std;
	cout<<st.age<<st.first<<st.last<<st.std<<endl;
  return 0;
}


