#include<iostream>
using namespace std;
class queue{
	private:
		int arr[10];
		int rear;
		int front;
		
	public:
		queue()
		{
			rear=front=-1;
			for(int i=0;i<10;i++)
			{
				arr[i]=0;
			}
		}
		bool isEmpty()
		{
			if(rear==-1 && front==-1)
			return true;
			else
			return false;
		}
		bool isFull()
		{
			if(rear==9)
			return true;
			else
			return false;
		}
		void enqueue(int value)
		{
			if(isFull())
			{
				cout<<"queue overflow cannot insert"<<endl;
			}
			else if(isEmpty())
				{
				  front=rear=0;	
				}	
			else
			{
				rear++;
				arr[rear]=value;
			}
		}
		int dequeue()
		{
			int temp;
			if(isEmpty())
			{
				cout<<"cannot remove  queue is empty"<<endl;
				return 0;
			}
			else if(rear==front)
			{
				temp=arr[rear];
				arr[rear]=0;
				rear--;
				front--;
			}
			else
		     {
		     	int temp=arr[front];
		     	arr[front]=0;
		     	front++;
			 }
			 return temp;
		}
		
		int count(){
		return rear-front +1;
		}
		void display()
		{
			cout<<"your queue is as follows:"<<endl;
			for(int i=0;i<10;i++ )
			{
				cout<<arr[i]<<endl;
			}
		}
		
	     
};


int main()
{
	queue Q;
	int options,value,position;
		do{
	    cout<<"enter a choice buddy:"<<endl;
	    cout<<"1.enqueue()"<<endl;
	    cout<<"2.dequeue()"<<endl;
	    cout<<"3.isEmpty()"<<endl;
	    cout<<"4.isFull()"<<endl;
	    cout<<"5.count()"<<endl;
	    cout<<"6.display()"<<endl;
        
		cin>>options;	    
	    switch(options)
	    {
	    	case 1:
	    			cout<<"enter the value you want to insert: "<<endl;
	    			cin>>value;
	    			Q.enqueue(value);
	    			
	    			break;
	        case 2:
	        		cout<<"dequeue operation called:: "<<endl;
	        		Q.dequeue();
	        	    
	        	    break;
	        case 3:
	        	    if(Q.isEmpty())
	        	    {
	        	    	cout<<"queue is empty"<<endl;
	        	    	
					}
					else{
						cout<<"queue is not empty";
					}
				 
				         	    break;
			case 4:
				  if(Q.isFull())
				  {
				  	cout<<"queue is full baby"<<endl;
				  }
				
				 	else{
				 		cout<<"queue is not full bro";
					 }
					break;
					
			case 5:
				cout<<"count function called::"<<Q.count()<<endl;
;				
				break;
				
		   case 6:
		   	
		   	    cout<<"dispaly function called"<<endl;
		   	    Q.display();		   	    
		   	    break;
		   	    
		   
		   	default:
		   		cout<<"please enter your choice correct"<<endl;
		   		
	    
	}

}while(options!=0);

}

