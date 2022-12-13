//linkedlisttraversal
#include<bits/stdc++.h>

using namespace std;
class node{
	public:
	int data;
	 node* next;
};
void linkedlisttraversal(node* ptr)
{
	while(ptr!=NULL)
	{
	cout<<"element: "<<ptr->data<<endl;
	ptr=ptr->next;
}
}
/*
node* deletionatfirst(node* head)
{
	node* ptr=head;
	head=head->next;
	free(ptr);
	return head;
}

node* deletionatindex(node* head,int index)
{

	node* p=head;
	node* q=head->next;
	for(int i=0;i<index-1;i++)
	{
		p=p->next;
		q=q->next;
    }

	p->next=q->next;
	free(q);
	return head;
 } 
 node* deletionatend(node* head)
 {
 	node* p=head;
 	node* q=head->next;
 	while(q->next!=NULL)
 	{
 		p=p->next;
 		q=q->next;
	 }
	 p->next=NULL;
	 free(q);
	 return head;
	  }
	  
node* fromvalue(node* head,int value)
{
	node*p=head;
	node*q=head->next;
	while(q->data!=value && q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	if(q->data==value)
	{
		p->next=q->next;
		free(q);
	}
	return head;
	
}
*/
int main()
{
	node* head;
	node* second;
    node* third;
	node* fourth;

	
	//assignment
//	head= new node();
//	second=new node();
//	third=new node();
//	fourth=new node();

	
	//linkedlist
	head->data=10;
	head->next=second;
	
	second->data=20;
	second->next=third;
	
	third->data=30;
	third->next=fourth;
	
	fourth->data=40;
	fourth->next=NULL;
	
	cout<<"linked list before deletion"<<endl;
	linkedlisttraversal(head);	
	
	//deletion at first
   /* head=deletionatfirst(head);
	cout<<"linked list after deletion"<<endl;
	linkedlisttraversal(head);*/
	
	//deletion at index
/*	head=deletionatindex(head,2);
    cout<<"linked list after deletion at index"<<endl;
	linkedlisttraversal(head);
	*/
	/*head=deletionatend(head,30);
    cout<<"linked list after deletion at end"<<endl;
	linkedlisttraversal(head);
*/
/*head=fromvalue(head,30);
cout<<"linkedlist after deletion from a value"<<endl;
	linkedlisttraversal(head);

	*/}


