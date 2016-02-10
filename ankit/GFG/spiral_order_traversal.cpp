# include<bits/stdc++.h>
# include"trees.h"
using namespace std;

void printgivenlevel(struct node *n,int level,int itr)
{
	if(n==NULL) return;
	
	if(level==1) 
	cout<<n->data<<" ";
	
	else
	if(level>1)
	{
		if(itr)
		{
		printgivenlevel(n->left,level-1,itr);
		printgivenlevel(n->right,level-1,itr);
		}
	
	else
		{
		printgivenlevel(n->right,level-1,itr);
		printgivenlevel(n->left,level-1,itr);
		}
	}
}


void printspiral(struct node *r)
{
	int h=height(r),i;
	bool itr=false;
	
	for(i=0;i<=h;i++)
	{
		printgivenlevel(r,i,itr);
		itr=!itr;
	}
	
}


int main()
{
	struct node *r=newn(1);
	r->left=newn(2);
	r->right=newn(3);
	r->left->left=newn(7);
	r->left->right=newn(6);
	r->right->left=newn(5);
	r->right->right=newn(4);
	cout<<"Spiral order traversal of the binary tree is\n";
	printspiral(r);
	return 0;
}

