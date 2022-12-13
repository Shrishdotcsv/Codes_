#include<iostream>
using namespace std;
class bstnode{
	public:
		int data;
		bstnode*right;
		bstnode*left;
};
bstnode* Getnode(int data)
{
	bstnode* newroot = new bstnode();
	newroot->data = data;
	newroot->left = newroot->right = NULL;
	return newroot;
}

bstnode*insert(bstnode* root,int data)
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
int findmin(bstnode*root){
	bstnode*current = root;
	if(current == NULL)
	{
		cout<<"empty tree!!"<<endl;
		return -1;
	}
	while(current->left!=NULL)
	{
		current=current->left;
	}
	return current->data;
}
int findmax(bstnode*root)
{
	bstnode*current = root;
	if(current == NULL)
	{
		cout<<"empty tree"<<endl;
		return -1;
	}
	while(current->right!= NULL)
	{
		current = current->right;
	}
	return current->data;
}
int  main()
{
bstnode* root = NULL;
	root = insert(root,10);
	root = insert(root,12);
	root = insert(root,14);
	root = insert(root,16);
	root = insert(root,18);
	root = insert(root,20);
	root = insert(root,22);
	root = insert(root,24);	
	cout<<"minimum element present in the tree is: "<<findmin(root)<<endl;
	cout<<"maximum element present in the tree is: "<<findmax(root)<<endl;
	
}
