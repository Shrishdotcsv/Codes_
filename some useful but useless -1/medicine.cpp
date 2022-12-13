//MEDICAL SCIENCE
#include<iostream>
using namespace  std;
class medical{
	private:
		
	int rack;
	string medicine;
	float price;
	
	public:
	void getdata(string medicine)
	{
		cout<<"enter the medicine name you want to check about: ";
		getline(cin,medicine);
		
	}
	void showdata()
	{
		cout<<"the medicine you entered is "<<medicine<<"  is useful for: ";
		
	}
};
int main()
{
	string s;
	s.getdata("paacetamol");
	
  return 0;
}


