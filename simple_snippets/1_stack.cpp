//stack using array
#include<iostream>
using namespace std;
class stack{
	private:
	int arr[10];
	int top;
	
	
	public:
		stack()
		{
		   top=-1;
		   for(int i=0;i<10;i++)
		   {
		   	arr[i]=0;
		   }
		}
		bool isEmpty()
		{
			if(arr[top]==-1)
			return true;
			else 
			return false;
		}
		bool isFull()
		{
			if(arr[top]==9)
			return true;
			else
			return false;
		}
		void push(int value)
		{
			if(isFull())
			{
				cout<<"you cannot insert value !! stack overflow"<<endl;
				
			}
			else{
				top++;
				arr[top]=value;
			}
		}
		int pop()
		{
			if(isEmpty())
			{
				cout<<"nothing is here what you going to pop!! stack underflow"<<endl;
				return 0;
			}
			else
			{
				int poppedvalue=arr[top];
				arr[top]=0;
				top--;
				return poppedvalue;
			}
		}
		int peek(int pos)
		{
			if(isEmpty())
			{
				cout<<"the stack is empty buddy!! "<<endl;
			}
			else
			{
			   return arr[pos];
			}
		}
		void change(int pos,int value)
		{
			arr[pos]=value;
			cout<<"your value is change at pos "<<pos<<endl;
		}
		int count()
		{
			return (top+1);	
			
     	}
     	void display()
     	{
     		cout<<"your stack is as follows bro::"<<endl;
     		for(int i=9;i>=0;i--)
     		{
     			cout<<arr[i]<<endl;
			 }
		 }
		
};
int main()
{
	stack s;
	int options,position,value;
	do{
	    cout<<"enter a choice buddy:"<<endl;
	    cout<<"1.push()"<<endl;
	    cout<<"2.pop()"<<endl;
	    cout<<"3.isEmpty()"<<endl;
	    cout<<"4.isFull()"<<endl;
	    cout<<"5.peek()"<<endl;
	    cout<<"6.change()"<<endl;
	    cout<<"7.count()"<<endl;
	    cout<<"8.display()"<<endl;
        
		cin>>options;	    
	    switch(options)
	    {
	    	case 1:
	    			cout<<"enter the item you want to push into the stack"<<endl;
	    			cin>>value;
	    			s.push(value);
	    			break;
	    			
	        case 2:
	        	    cout<<"pop function called: popped value->"<<s.pop()<<endl;
	        	    break;
	        	    
	        case 3:
	        	    if(s.isEmpty())
	        	    {
	        	    	cout<<"stack is empty na bro"<<endl;
					}
					else{
						cout<<"stack is not empty bro"<<endl;
						
					}
					break;
			case 4:
				 if(s.isFull())
	        	    {
	        	    	cout<<"stack is full na bro"<<endl;
					}
					else{
						cout<<"stack is not full bro"<<endl;
						
					}
					break;
					
			case 5:
				cout<<"enter the position you want to  peek"<<endl;
				cin>>position;
				cout<<"peek function called ->"<<s.peek(position)<<endl;
				break;
				
		   case 6:
		   	    cout<<"enter the positon where you want to make change"<<endl;
		   	    cin>>position;
		   	    cout<<"enter the value "<<endl;
		   	    cin>>value;
		   	    s.change(position,value);
		   	    break;
		   	case 7:
		   		cout<<"count function called- number of items in the stack is->"<<s.count()<<endl;
		   		break;
		   		
		   	case 8:
		   		cout<<"display function called:"<<endl;
		   		 s.display();
		   		 break;
		   		 
		   	default:
		   		cout<<"sahi se tap karna bhai "<<endl;
		}
	    
	}while(options!=0);
         

    return 0;
  }
