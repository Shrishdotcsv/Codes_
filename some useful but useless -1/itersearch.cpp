//iterative binary search
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

int  isBST(node * root)
{
	node* pre=NULL;
	if(root!=NULL)
	{
		if(!isBST(root->left))
		{
			return 0;
		}
		if(pre!=NULL&&root->data<=pre->data)
		{
			return 0;
		}
		pre=root;
		return isBST(root->right);
	}
	else{
		return 1;
	}
}
node* search(node* root,int key)
{
	if(root==NULL)
	{
		return NULL;
		
	}
	if(key==root->data)
	{
		return root;
	}
	else if(key<root->data)
	{
		return search(root->left,key);
	}
	else{
		return search(root->right,key);
	}
}


void insert(node* root,int key)
{
	node* prev=NULL;
	while(root!=NULL)
	{
		prev=root;
		if(key==root->data)
		{
			cout<<"cannot insert, already inserted"<<endl;
			return;
		}
		else if(key<root->data)
		{
			root=root->left;
		}
		else
		{
			root=root->right;
		}
		
	}
	node* ptr= createnode(key);
	if(key<prev->data)
	{
		prev->left=ptr;
	}
	else{
	
	prev->right=ptr;
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


	insert(root,10);
	cout<<root->right->right->data;
	return 0;
	
}
