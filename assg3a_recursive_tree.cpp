//tree by using the recursive way 

#include<iostream>
using namespace std;

class BT
{
	public :
	char data;
	BT *lchild,*rchild;
	void create();
	void insert(BT *root, BT *next);
	void inorder(BT *root);
	void preorder(BT *root);
	void postorder(BT *root);
	
}*root;
void BT:: create()
{
	int ch;
	BT *next;
	root =new BT;
	root->lchild=NULL;
	root->rchild=NULL;
	cout<<"\n Enter the data at root";
	cin>>root->data;
	
	do
	{
		cout<<"\n Do you want to add next(type 1):-";
		cin >>ch;
		next =new BT;
		next->lchild=NULL;
		next->rchild=NULL;
		if(ch==1)
		{
		
			cout<<"\n enter the new node:-";
			cin>>next->data;
			insert (root,next);
		}
	}while(ch==1);
}
void BT:: insert(BT *root,BT *next)
{
	char chr;
	cout<<"\n  the data for the root:";
	cout<<root ->data;
	cout<<"\n where you want to add the data at left or right(l/R):-";
	cin>>chr;
	if(chr=='l'|| chr=='L')
	{
		if(root->lchild==NULL)
		{
			root->lchild=next;
			
		}
		else
		{
			insert(root->lchild,next);
		}
	}
	else
	{	
		if(root->rchild==NULL)
		{
			root->rchild=next;
			
		}
		else
		{
			insert(root->rchild,next);
		}
	}
}
void BT :: inorder(BT *root)
{
	if(root!=NULL)
	{
		inorder(root->lchild);
		cout<<root->data<<"\t";
		inorder(root->rchild);
	}
}
void BT :: preorder(BT *root)
{
	if(root!=NULL)
	{
		cout<<root->data<<"\t";
		preorder(root->lchild);
		preorder(root->rchild);
	}
}
void BT :: postorder(BT *root)
{
	if(root!=NULL)
	{
		inorder(root->lchild);
		inorder(root->rchild);
		cout<<root->data<<"\t";
	}
}
int main()
{
	int n ,ch;
	BT b;
	do{
	cout<<"\n Menu";
	cout<<"\n 1. create";
	cout<<"\n 2.inorder";
	cout<<"\n 3.preorder";
	cout<<"\n 4.postorder";
	cout<<"\n 5.exit";
	cout<<"\n enter the choice";
	cin>>ch;
	switch(ch)
	{
	case 1:
		b.create();
		break;
	case 2:
		b.inorder(root);
		break;
	
	case 3:
		b.preorder(root);
		break;
		
	case 4:
		b.postorder(root);
		break;
	}
	}while(ch!=5);
}
