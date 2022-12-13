#include<iostream>
using namespace std;
class node{
	public:
		char data;
		node* left;
		node* right;
};
node* Getnode(char data)
{
	node* newroot = new node();
	newroot->data = data;
	newroot->left = newroot->right = NULL;
	return newroot;
}

node*insert(node* root,char data)
{
	if(root == NULL)
	{
		root = Getnode(data);
		return root;
	}
	else if(data<= root->data)
	{
		root->left = insert(root->left,data);
//		return root;
	}
	else
	{
		root->right = insert(root->right,data);
//		return root;
	}
	return root;
}

void preorder(node* root)
{
	if(root == NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(node* root)
{
	if(root == NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
void inorder(node* root)
{
	if(root == NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int main()
{
	node* root = NULL;
	root = insert(root,'F');
	root = insert(root,'D');
	root = insert(root,'J');
	root = insert(root,'B');
	root = insert(root,'E');
	root = insert(root,'G');
	root = insert(root,'K');
	root = insert(root,'A');
	root = insert(root,'C');
	root = insert(root,'I');
	root = insert(root,'H');
	cout<<"preorder: ";
	preorder(root);
	cout<<endl;
	cout<<"postorder: ";
	postorder(root);
	cout<<endl;
	cout<<"inorder: ";
	inorder(root);
	cout<<endl;
	
		
}
