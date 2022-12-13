#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node*left;
		node*right;
};

node*getnode(int data){
	node*newnode = new node();
	newnode->data = data;
	newnode->left = newnode->right = NULL;
	return newnode;
}
node*insert(node*root,int data)
{
	if(root == NULL)
	{
	 	root = getnode(data);
		return root;	
	}
	else if(data <= root->data){
		root->left = insert(root->left,data);
	}
	else
	{
		root->right = insert(root->right,data);
	}
	return root;
}

bool search(node*root,int data)
{
	if(root == NULL) return false;
	else if(root->data == data) return true;
	else if(root->data <= data) return search(root->right,data);
	else return search(root->left,data);
}

int findmaximum(node*root)
{
	if(root == NULL)
	{
		return -1;
	}
	else
	{
		while(root->right != NULL)
		{
			root = root->right;
		}
		return root->data;
	}
}

int findminimum(node*root)
{
	if(root == NULL)
	{
		return -1;
	}
	else
	{
		while(root->left != NULL)
		{
			root = root->left;
		}
		return root->data;
	}
}
int main()
{
	node*root = NULL;
	root = insert(root,10);
	root = insert(root,11);
	root = insert(root,12);
	root = insert(root,13);
	root = insert(root,14);
	root = insert(root,15);
	root = insert(root,16);
	root = insert(root,17);
	root = insert(root,18);
	root = insert(root,19);
	
//	int val;
//	cout<<"enter the value you want to search? ";
//	cin>>val;
	
//	if(search(root,val) == true) cout<<"found!!"<<endl;
//	else cout<<" not found!!!"<<endl;
	cout<<findmaximum(root)<<endl;
	cout<<findminimum(root);
	
} 
