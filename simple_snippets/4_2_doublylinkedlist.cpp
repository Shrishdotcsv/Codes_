#include<iostream>
using namespace std;
class node{
	public:
     int data;
     node* next;
     node* prev;
};
void doublylinkedlisttraversal(node*head)
{
	node* last;
	node*p=head;
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
		last=last->prev;
	}
}
int main()
{
	node* head=new node();
	node* second=new node();
	node* third=new node();
	node* fourth=new node();
	 
	 head->data=12;
	 head->next=second;
	 head->prev=NULL;
	 
	 second->data=24;
	 second->next=third;
	 second->prev=head;
	 
	 third->data=36;
	 third->next=fourth;
	 third->prev=second;
	 
	 fourth->data=48;
	 fourth->next=NULL;
	 fourth->prev=third;
	 
	 doublylinkedlisttraversal(head);
}
