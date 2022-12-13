//linkedlisttraversal
#include<iostream>
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
//case1
node* insertatbegg( node*head,int data)
{
        node* ptr=new node();
       	ptr->next=head;
    	ptr->data=data;
    	return ptr;
}
//case 2
node* insertatindex(node*head,int data,int index)
{
	node* ptr=new node();
	node* p=head; 
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
	//case 3
node* insertatend(node* head,int data)
{
	node* ptr=new node();
	ptr->data=data;
	node* p =head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
	return head;
}
//case 4
node* afternode(node* head,node* shiva,int data)
{
   node* ptr=new node();
   ptr->data=data;
   ptr->next=shiva->next;
   shiva->next=ptr;
   return 	head;

}

main()
{
	node* head;
	node* second;
    node* third;
	node* fourth;

	
	//assignment
	head= new node();
	second=new node();
	third=new node();
	fourth=new node();

	
	//linkedlist
	head->data=10;
	head->next=second;
	
	second->data=20;
	second->next=third;
	
	third->data=30;
	third->next=fourth;
	
	fourth->data=40;
	fourth->next=NULL;
	
	cout<<"linked list before isnerting"<<endl;
	linkedlisttraversal(head);	

 head= insertatbegg(head,23);
 cout<<"after inserting at beggining"<<endl;
  	linkedlisttraversal(head);	
  	
  	
    insertatindex(head,127,2);
    cout<<"after inserting at index"<<endl;
  linkedlisttraversal(head);	
    
   	head=insertatend(head,323);
   cout<<"after inserting at end"<<endl;
   	linkedlisttraversal(head);	
   
   	
   	
   	head=afternode(head,third,9999999);
   	cout<<"linked list after isnerting after node"<<endl;
   		linkedlisttraversal(head);
   	
   	
   	
    
}

