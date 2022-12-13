#include<iostream>
#include<string>
using namespace std;
class queue{
	private:
	int f,r;
	int arr[10];
	public:
		queue()
		{
			int f=-1;
			int r=-1;
			for(int i=0;i<10;i++)
			{
				arr[i]=0;
			}
		}
	    bool isFull(){
	    	if(r==10)
	        return true;
	        else
	        return false;
		}
		bool isEmpty()
		{
			if(r==-1)
			return true;
			else
			return false;
		}
		void enqueue(int val)
		{
			if(isFull())
			{
				cout<<"queue is full "<<endl;
			}
			r++;
			arr[r]=val;
		}
		int dequeue()
	{
		int a=-1;
		if(isEmpty())
		{
			cout<<"queue is empty "<<endl;
		}
		f++;
	a= arr[f];
	return a;
	}
	void display()
	{
		cout<<"your queue is here "<<endl;
		for(int i=0;i<10;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
	
};
int  main()
{
	
	queue q;
	cout<<"before enqueue "<<endl;
	q.display();
	
    cout<<"after dequeue "<<endl;
    q.dequeue();
    q.display();
}

