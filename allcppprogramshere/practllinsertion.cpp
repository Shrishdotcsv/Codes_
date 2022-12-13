//insertion in a linked list
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node{
	public:
	node* next;
	int data;
};
traversall(node* ptr)
{
	while(ptr!=NULL)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
node* insatbeg( node* head,int data)
{

	node* ptr=new node();
	ptr->next=head;
	ptr->data=data;
	return ptr;
}
node* insatend(node* head,int data)
{
	node* p=head;
	node* ptr=new node();
		ptr->data=data;
	while(p->next!=NULL)
	{
		p=p->next;
	}

	p->next=ptr;

	ptr->next=NULL;
	
	return head;
	
}
node* insatindex(node*head,int data,int index)
{
	node* ptr=new node();
	ptr->data=data;
	node* p=head;
	int i=0;
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	ptr->next=p->next;
	p->next=ptr;
	return head;
}



main(){
	node* head;
	node* second;
	node* third;
	node* fourth;
	
	head=new node();
	second=new node();
	third=new node();
	fourth=new node();
	
	head->data=100;
	head->next=second;
	
	second->data=200;
	second->next=third;
	
	third->data=300;
	third->next=fourth;
	
	fourth->data=400;
	fourth->next=NULL;
	
	cout<<"traversal before isertion: "<<endl;
	traversall(head);
	
   //head=insatbeg(head,50);
    //cout<<"traversal after isertion: "<<endl;
    //traversall(head);
  //  head=insatend(head,500);
    //cout<<"traversal after isertion at end: "<<endl;
    //	traversall(head);
    head=insatindex(head,250,2);
    cout<<"traversal after insetion at given index"<<endl;
    traversall(head);
	
}
