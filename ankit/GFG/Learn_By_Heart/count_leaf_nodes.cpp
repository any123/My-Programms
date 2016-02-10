# include<bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};

struct node * newn(int x)
{
	struct node *n=new node;
	n->data=x;
	n->left=n->right=NULL;
	return(n);
}

unsigned int getleafcount(struct node *n)
{
	if(n==NULL)
	return 0;
	if(n->right==NULL && n->left==NULL)
	return 1;
	else
	return getleafcount(n->left)+getleafcount(n->right);
}


int main()
{
	struct node *r1=newn(1);
	
	r1->left=newn(2);
	r1->right=newn(3);
	r1->left->left=newn(4);
	r1->left->right=newn(5);
	
	cout<<"Leaf count of the tree is\n";
	cout<<getleafcount(r1);
	return 0;
	
}
