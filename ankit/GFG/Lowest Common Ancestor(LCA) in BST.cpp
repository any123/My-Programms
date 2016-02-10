# include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *left,*right;
	
};

struct node *lca(struct node *root,int n1,int n2)
{
	if(root==NULL) return NULL;
	if(root->data >n1 && root->data>n2)
	return lca(root->left,n1,n2);
	
	if(root->data <n1 && root ->data<n2)
	return lca(root->right,n1,n2);
	
	return root;
}

struct node*newn(int x)
{
	struct node *n=new node;
	n->data=x;
	n->left=n->right=NULL;
	return n;
}

int main()
{
	
	struct node *r=newn(20);
	r->left=newn(8);
	r->right=newn(22);
	r->left->left=newn(4);
	r->left->right=newn(12);
	r->left->right->left=newn(10);
	r->left->left->right=newn(14);
	
	int n1=10,n2=14;
	
	struct node *t=lca(r,n1,n2);
	cout<<"for 10 and 14 the LCA is "<<t->data;
}
