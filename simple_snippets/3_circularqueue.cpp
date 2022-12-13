#include<iostream>
using namespace std;
class circularqueue{
	private:
		int arr[5];
		int front;
		int rear;
		
		public:
			circularqueue()
			{
				front=rear=-1;
				for(int i=0;i<5;i++)
				{
					arr[i]=0;
				}
			}
			bool isFull()
			{
				if((rear+1)%5==front)
			    return true;
			    else
			    return false;
			}
			bool isEmpty()
			{
				if(rear==-1&&front==-1)
				return true;
				else
				return false;
			}
			void enqueue(int value)
			{
				if(isFull())
				{
				cout<<"your queue is full"<<endl;
	            }
	            else if(isEmpty())
	            {
	            	front=rear=0;
	            	arr[rear]=value;
				}
				else
				{
					rear=(rear+1)%5;
					arr[rear]=value;
					
				}
			}
			int dequeue()
			{
				int temp;
				if(isEmpty())
				{
					return 0;
				}
				else if(front==rear)
				{
					temp=arr[rear];
					arr[rear]=0;
					rear=front=0;
				}
				else
				{
					temp=arr[rear];
					arr[rear]=0;
					front=(front+1)%5;
				}
				return temp;
			}
			void display()
			{
				cout<<"your data as follows in circular queue"<<endl;
				for(int i=5;i>0;i--)
				{
					cout<<arr[i]<<endl;
				}
			}
};

int main()
{
	circularqueue Q;
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
		   	
		   	    cout<<"dispaly function called"<<endl;
		   	    Q.display();		   	    
		   	    break;
		   	    
		   
		   	default:
		   		cout<<"please enter your choice correct"<<endl;
		   		
	    
	}

}while(options!=0);

}
