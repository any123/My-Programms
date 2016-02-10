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

int identicalTrees(struct node *a, struct node *b)
{
	if(a==NULL && b==NULL)
	return 1;
	
	if(a!=NULL && b!=NULL)
	{
		return(a->data==b->data && identicalTrees(a->left,b->left) && identicalTrees(a->right,b->right));
	}
	return 0;
}


int main()
{
	struct node *r1=newn(1);
	struct node *r2=newn(1);
	r1->left=newn(2);
	r1->right=newn(3);
	r1->left->left=newn(4);
	r1->left->right=newn(5);
	
	r2->left=newn(2);
	r2->right=newn(3);
	r2->left->left=newn(4);
	r2->left->right=newn(5);
	if(identicalTrees(r1,r2))
	cout<<"Both are identical\n";
	else
	cout<<"Trees are not identical\n";
	return 0;
	
}
