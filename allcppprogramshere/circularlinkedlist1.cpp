//circularlinkdlist
#include<iostream>
using namespace std;
class node{
	public:
		node* next;
		int data;
};
traversal(node* head)
{
	node* p=head;
	do
	{
	cout<<p->data<<endl;
	p=p->next;
	}while(p!=head);
}
node* insertatbegg(node* head,int data)
{
	node* p=head;
	node* ptr=new node;
	ptr->data=data;
	do
	{
	      p=p->next;
	}while(p->next!=head);
	p->next=ptr;
	ptr->next=head;
	head=ptr;
	return head;
}
node* insertatend(node*head,int data)
{
	node* ptr= new node();
	ptr->data=data;
	node* p =head;
	while(p->next!=head)
	{
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	return head;
	
}
node* insertatindex(node* head,int index,int data)
{
	node* p=head;
	node* ptr=new node();
	ptr->data=data;
	int i=0;
	while(i!=index-1)
	{
		p=p->next;
		i++;
	
	}

	ptr->next=p->next;
		p->next=ptr;
	return head ;
}
main()
{
	node* head;
	node*second;
	node* third;
	node* fourth;
	
	head=new node();
    second=new node();
	third=new node();
	fourth=new node();
	
	head->data=11;
	head->next=second;
	
	second->data=22;
	second->next=third;
	
	third->data=33;
	third->next=fourth;
	
	fourth->data=44;
	fourth->next=head;
	
	cout<<"traversal before editing in the cicular linkedlist is : "<<endl;
	traversal(head);
	
/*	head=insertatbegg(head,1);
	cout<<"traversal after inserting at begginig in the cicular linkedlist is : "<<endl;
	traversal(head);
*/		
/*	head=insertatend(head,55);
	cout<<"traversal after  inserting node at end in the cicular linkedlist is : "<<endl;
	traversal(head);
*/
    head=insertatindex(head,2,24);
	cout<<"traversal after inserting at index in the cicular linkedlist is : "<<endl;	
	traversal(head);
}
