#include<iostream>
using namespace std;
class queue{
	
	private:
		
	int front;
	int rear;
	int arr[10];
	
	public:
		
		queue()
		{
			int rear=-1;
			int front =-1;
			for(int i=0;i<10;i++)
			{
				arr[i]=0;
			}
			
		}
		bool isEmpty()
		{
			if(front==-1||rear==-1)
			return true;
			else
			return false;
			
		}
		bool isFull()
		{
			if(rear==4)
			return true;
			else
			return false;
		}
		void enqueue(int val)
		{
			if(isFull())
			{
				cout<<"queue is full"<<endl;
	}
			else if(isEmpty()){
					front=0;
				rear=0;
				arr[rear]=val;
						}
					else{
						rear++;
						arr[rear]=val;
					}
			}
		
		int dequeue()
		{
			int x;
			if(isEmpty())
			{
			  cout<<"queue is empty"<<endl;
			  return 0;
			}
			else if(front==rear)
			{
				x=arr[front];
				arr[front]=0;
				rear=-1;
				front=-1;
				return x;
			}
			else{
				x=arr[front];
				arr[front]=0;
				front++;
				return x;
				
			}
		}
		void display()
		{
			cout<<"elements are in queue is as follows:"<<endl;
			for(int i=0;i<10;i++)
			{
				cout<<arr[i]<<endl;
			}
		}
		
};
int main()
{
	queue q;
	int options,value;
	do{
		cout<<"enter your choice::"<<endl;
		cout<<"1.enqueue()"<<endl;
		cout<<"2.dequeue()"<<endl;
		cout<<"3.isFull()"<<endl;
		cout<<"4.isEmpty()"<<endl;
		cout<<"5.display()"<<endl;
		
		cin>>options;
		switch(options)
		{
			case 1:
				cout<<"enqueue operation:: enter an item to enqueue in the queue"<<endl;
				cin>>value;
				q.enqueue(value);
				break;
				
			case 2:
				cout<<"dequeue operation::dequeued value:"<<q.dequeue()<<endl;
				break;
				
			case 3:
				if(q.isFull())
				cout<<"queue is full"<<endl;
				else
				cout<<"queue is not full"<<endl;
				break;
			case 4:
				if(q.isEmpty())
				cout<<"queue is empty"<<endl;
				else
				cout<<"queue is not empty"<<endl;
				break;
			
			case 5:
				cout<<"display function called:"<<endl;
				q.display();
				break;
				
			default:
				cout<<"enter proper option baby"<<endl;
				break;
				
				
		}
	}while(options!=0);
	return 0;
	
}





