#include<string>
#include<iostream>
using namespace std;
class stack{
public:
	int top;
	char array[10];
	
	public:
	
		bool isEmpty()
		{
			if(top==-1)
			return true;
			else
			return false;
		}
		
		bool isFull()
		{
			if(top==9)
			return true;
			else
			return false;
		}
		
		void push(char data)
		{
			if(isFull())
			{
				cout<<"STACK OVERFLOW!!"<<endl;
				
			}
			top++;
			array[top]=data;
		}
		
		char pop()
		{
			if(isFull())
			{
				cout<<"STACK UNDERFLOW!!"<<endl;
			}
			char value;
			value=array[top];
			array[top]=0;
			top--;
			return value;
		}
		
	/*	int count()
		{
			return (top+1);
		}
		
		int peek(int pos)
		{
			if(isEmpty())
			{
				cout<<"UNDERFLOW BABY!!"<<endl;
			}
			return array[pos];
		}
		
		int change(int pos,int data)
	{
		array[pos]=data;
		cout<<"value is changed at the position "<<pos<<endl;
	}
	*/
	
	void display()
	{
		cout<<"the data in the stack is :"<<endl;
		for(int i=9;i>=0;i--)
		{
			
			cout<<array[i]<<endl;
		}
	}
	

	int paranthesis(char arr[])
	{
		stack s1[100];
		top=-1;
		
		
		for(char i=0;arr[i]!='\0';i++)
		{
			if(arr[i]='(')
			{
				push('(');
			}
			else if(arr[i]==')')
			{
				if(isEmpty())
				{
					return 0;
				}
				pop();
			}
		}
	}
};
main()
{
char exp= "a*(b)";
if(paranthesis(exp))
{
	cout<<"paranthesis matching:"<<endl;
}
  cout<<"paranthesis is not matching";
/*	int option,position,value
	do{
		cout<<"select what operation you want to perform::"<<endl;
		cout<<"select 0 if you want to exit"<<endl;
		cout<<"1: push() "<<endl;
		cout<<"2: pop() "<<endl;
		cout<<"3: isEmpty() "<<endl;
		cout<<"4: isFull() "<<endl;
		cout<<"5: peek() "<<endl;
		cout<<"6: count() "<<endl;
		cout<<"7: change() "<<endl;
		cout<<"8: display() "<<endl;
		
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"enter the value you want to push in the stack "<<endl;
				cin>>value;
				s.push(value);
				
				break;
				
			case 2:
				cout<<"this remove top value from stack "<<endl;
				s.pop();
				
				break;
				
		    case 3:
			    if(s.isEmpty())
			
			    	cout<<"STACK IS EMPTY!!"<<endl;
				else
				cout<<"STACK IS NOT EMPTY "<<endl;
				
				break;
				
			case 4:
			  if(s.isFull())
			       cout<<"STACK IS FULL!!"<<endl;
			       else
			       cout<<"STACK IS NOT FULL "<<endl;
			   break;
			   
			case 5:
			   cout<<"access the  value in stack by entering position "<<endl;
			   cin>>position;
			   s.peek(position);
			   
			   break;
			   
			case 6:
			   cout<<"check how many elemennts in this stack: "<<endl;
			   s.count();
			   
			   break;
			   
			case 7:
			   cout<<"enter the position where you want to change: "<<endl;
			   cin>>position;
			   cout<<"enter the value you want to assign at position "<<position <<endl;
			   cin>>value;
			   s.change(position,value);
			   
			   break;
			   
			case 8:
				cout<<"display function displays all things: "<<endl;
				s.display();
				
				break;
				
		    default:
		    	cout<<"enter position properly "<<endl;
				
			    		
		}
	}while(option!=0);
	*/
}
