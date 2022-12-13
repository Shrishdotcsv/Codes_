#include<iostream>
using namespace std;
class cirqueue{
	private:
	int front;
	int rear;
	int arr[10];
	
	public:
		cirqueue()
		{
			front =-1;
			rear=-1;
			for(int i=0;i<10;i++)
			{
				arr[i]=0;
			}
		}
		bool isempty()
		{
			if (front==-1 && rear==-1)
			return true;
			else
			return false;
			
		}
		bool isfull()
		{
			if((rear+1)%10 ==frobt)
			return true;
			else
			return false;
		}
		void enqueue(int val)
		{
			if(isfull()){
		   cout<<"queue is full"<<endl;
		   return;	
		}
			else if(isempty())
0			{
				rear =0;
				front =0;
				arr[rear]=val;
				
			}
			else{
				rear=(rear+1)%10;
				arr[rear]=val;
			}
			
		}
		int dequeue()
		{
			if(isempty())
			{
				cout<<"queue is empty"<<endl;
				return;
			}
			else if(front == rear)
			{
				int x=arr[rear];
				rear=front=-1;
				arr[rear]=0;
				return x;
			}
			else{
				cout<<"front value: "<<front<<endl;
				x=arr[front];
				front=(front+1)%10;
				return x;
			}
			
		}
		
};
int main()
{
  return 0;
}


