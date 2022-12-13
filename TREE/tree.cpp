#include<iostream>
using namespace std;
class bstnode{
	public:
	int data;
	bstnode* right;
	bstnode* left;
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
bool search(bstnode*root,int data)
{
	if(root == NULL) return  false;
	else if(root->data == data) return true;
	else if(data<=root->data)return search(root->left,data);
	else return search(root->right,data);
}
int main()
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
	int number;
	cout<<"enter number"<<endl;cin>>number;
	if(search(root,number) == true) cout<<"found!!"<<endl;
	else cout<<" not found!!!"<<endl;
	
}
