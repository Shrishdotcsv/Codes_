//doublylinkedlist
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node* previous;
};
node* doublytraversal(node* head)
{
	node* last;
	node* p=head;
	cout<<"traversal forward:"<<endl;
    while(p!=NULL)
    {
    	
    	cout<<p->data<<endl;
    	last=p;
    	p=p->next;
	}
		cout<<"traversal backward:"<<endl;

	while(last!=NULL)
	{
		cout<<last->data<<endl;
		last=last->previous;
	}
}

main()
{
   node*head=new node();	
   node* second=new node();
   node* third=new node();
   node* fourth=new node();
   
   head->data=10;
   head->next=second;
   head->previous=NULL;
   
   second->data=15;
   second->next=third;
   second->previous=head;
   
   third->data=20;
   third->next=fourth;
   third->previous=second;
   
   fourth->data=25;
   fourth->next=NULL;
   fourth->previous=third;
   
   
   doublytraversal(head);
   
   
}
