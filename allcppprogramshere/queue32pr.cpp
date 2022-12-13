#include<iostream>
using namespace std;
class  queue{
	private:
	int front;
	int rear;
	int arr[10];
	public:
		queue()
		{
			int front=-1;
			int rear=-1;
			for(int i=0;i<10;i++)
			{
				arr[i]=0;
			}
		}
		bool isFull()
		{
			if(rear==9)
			return true;
			else
			return false;
		}
		bool isEmpty()
        { 
            if(rear==-1)
            return true;
            else
            return false;
		}
		void enqueue(int val)
		{
			if(isFull())
			{
				cout<<"queue overflow "<<endl;
			}
			rear++;
			arr[rear]=val;
		}
		int dequeue()
		{
			int x=0;
			if(isEmpty())
			{
				cout<<"queue underflow "<<endl;
			}
		    x=arr[rear];
		    arr[rear]=0;
		    rear--;
		    return x;
		}
        void display()
        {
        	cout<<"your queue as follows:"<<endl;
        	for(int i=1;i<10;i++)
        	{
        		cout<<arr[i]<<endl;
			}
		}

};
int main()
{
	queue q1;
	q1.enqueue(10);
	q1.enqueue(9);
	q1.enqueue(8);
	q1.enqueue(7);
	q1.enqueue(6);
	q1.enqueue(5);
	q1.enqueue(4);
	q1.enqueue(3);
	q1.enqueue(2);
	
	  q1.dequeue();
    q1.display();
	
	
	q1.display();
	if(q1.isFull())
	{
		cout<<"queue is overflow"<<endl;
	}
	else
	{
	cout<<"queue is not full"<<endl;
    }
     if(q1.isEmpty())
    {   
	cout<<"queue is underflow"<<endl;
    }
     else{
	cout<<"queue is not empty"<<endl;
    }
  
	}
