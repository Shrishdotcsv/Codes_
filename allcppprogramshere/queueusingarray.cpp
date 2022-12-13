//queue as array
#include<iostream>
#include<string>
using namespace std;
class queue{

private:
	int f;
	int r;
	int arr[100];
	
	public:
		queue()
		{
			f=-1;
			r=-1;
			for(int i=0;i<100;i++)
			{
				arr[i]=0;
				
			}
		}
		
		bool isFull()
		{
			if(f==99)
			return true;
			else 
			return false;
		}
		
		bool isEmpty()
		{
			if(f==-1)
		    return true;
		    else
		    return false;
		}
		
		void enqueue(int  val)
		{
			if(isFull())
			{
				cout<<"queue is overflow"<<endl;
			}
			f++;
			arr[f]=val;
		}
	/*	void dequeue()
		{
			if(isEmpty())
			{
				cout<<"queue is underflow";
			}
			r++;
			int data=arr[r];
			return data;
			
		}
		*/
		void display()
		{
			cout<<"the data in your queue is :"<<endl;
			for(int i=0;i<99;i++)
			{
				cout<<arr[i]<<endl;
			}
		}
};

main()
{
	queue q;
	int options,value;
	do{
		cout<<"select your options:"<<endl;
		cout<<"1.enqueue()"<<endl;
		cout<<"2.isFull()"<<endl;
		cout<<"3.isEmpty()"<<endl;
		cout<<"4.display()"<<endl;
		cin>>options;
		
		switch(options)
		{
			case 1:
				cout<<"enter the value you want to add in the queue:"<<endl;
				cin>>value;
				q.enqueue(value);
	            break;
	            
	        case 2:
	        	if(q.isFull())
	        	{
	        		cout<<"the queue is full baby!"<<endl;
				}
				cout<<"the queue is not full baby!"<<endl;
				
			case 3:
				if(q.isEmpty())
	        	{
	        		cout<<"the queue is empty baby!"<<endl;
				}
				cout<<"the queue is not empty baby!"<<endl;
				
			case 4:
				cout<<"it display all the data in queue"<<endl;
				q.display();
								
			default:
				cout<<"choose oprations properly::"<<endl;
			}
				
		}while(options!=0);
	
}

		

