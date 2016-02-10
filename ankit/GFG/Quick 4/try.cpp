# include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};

struct node *newn(int x)
{
	struct node *n=new node;
	n->data=x;
	n->left=n->right=NULL;
	return n;
}

int search(struct node * root,int ele)
{	struct node * temp;
	list<node*> q;
	list<node*>:: iterator c;
	if(root== NULL) return 0 ;
	q.push_back(root);
	
	while(!q.empty())
	{	c=q.begin();
	temp=(*c);
		q.pop_front();
		if(ele==temp->data) return 1;
		
		if(temp->left)
		 q.push_back(temp->left);
		 if(temp->right)
		 q.push_back(temp->right);
		 
	}
	return 0;
	
}
int main()
{
	struct node *r=newn(1);
	r->left=newn(2);
	r->right=newn(3);
	r->left->left=newn(4);
	r->left->right=newn(5);
	int x;  cin>>x;
	if(search(r,x))
	cout<<"Found !!\n";
	else
	cout<<"Not found\n";
	return 0; 
}
