//postorder
#include<iostream>
using namespace std;
class node{
  public:
  	int data;
  	node*left;
  	node*right;
};
node* postorder(node* root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<endl;
	}
}
node* createnode(int data){
	node*root=new node();
	root->data=data;	
	root->left=NULL;
	root->right=NULL;
	return root;
}
int main()
{
   node* root=createnode(4);
    node* child1=createnode(1);
	 node* child2=createnode(6);
	  node* child3=createnode(5);
	   node* child4=createnode(2);	
	   
	   root->left=child1;
	   root->right=child2;
	   child1->left=child3;
	   child1->right=child4;
	   
	   postorder(root);
	   
}
