  #include<iostream>
  using namespace std;
  int sum(int *,int *);
  int main()
  {
  	int a=10,b=11;
  	int s=sum(&a,&b);
  	cout<<"sum is"<<s<<endl;
  }
  int sum(int *x,int *y)
  {
  	return(*x+*y);
  }
