//linkedlist
#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;
};
void traversing(node* ptr)
{
	while(ptr!=NULL)
	{
		cout<<"linkedlist data are:"<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
node* insertatfirst(node* head,int data)
{
	node* ptr= new node();
	ptr->next=head;
	ptr->data=data;
	return ptr;
}

node* insertatindex(node*head,int data,int index)
{
	 node* ptr=new node();
	node* p= head; 
   	int i=0;
	while(i!=index-1)
	{
		p=p->next;
		i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
	return head;
	}

node* insertatend(node* head,int data)
{
	node* ptr=new node();
	ptr->data=data;   
	node* p=head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
	return head;
}
node* delete()
{
	
}
int main()
{
     node* head=new node();
     node* second= new node();
     node* third =new node();
     node* fourth =new node();
     
     head->data=10;
     head->next=second;
     second->data=20;
     second->next=third;
     third->data=30;
     third->next=fourth;
     fourth->data=40;
     fourth->next=NULL;
     
     cout<<"traversal of linked list is as follows::"<<endl;
     traversing(head);
     
      head = insertatfirst(head,100);
     cout<<"linkedlist after inserting at first"<<endl;
     traversing(head);
     
     
     head=insertatindex(head,120,2);
     cout<<"linkedlist after inserting at index"<<endl;
     traversing(head);
     
     
     head=insertatend(head,140);
     cout<<"linkedlist after inserting at end"<<endl;
     traversing(head);
}
