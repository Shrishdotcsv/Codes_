//inorder
#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* left;
	node* right;
};
node* createnode(int data)
{
	node*root=new node();
	root->data=data;
	root->left=NULL;
	root->right=NULL;
	return root;
}
int isBST(node* root)
{
	node* previous=NULL;
	if(root!=NULL)
	{
		if(!isBST(root->left)){
			return 0;
		}
		if(previous!=NULL && root->data<=previous->data){
			return 0;
		}
		previous=root;
		return isBST(root->right);
	}
	else{
		return 1;
	}
}
node* inorder(node* root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<endl;
		inorder(root->right);
	}

}

int main()
{
	 node* root=createnode(5);
	 node* child1=createnode(3);
	 node* child2=createnode(6);
	 node* child3=createnode(1);
	 node* child4=createnode(4);
	 
	 
	 
	 
	 root->left=child1;
	 root->right=child2;
	 child1->left=child3;
	 child1->right=child4;
	 
	 inorder(root);
	 cout<<endl;
	 cout<<isBST(root);
}
