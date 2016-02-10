# include<bits/stdc++.h>

using namespace std;

struct node
{
	int data;
    struct node* left;
	struct node* right;
};

void printlevel(struct node* root)
{
	if(root==NULL) return;
	
	queue<node*>q;
	
	q.push(root);
	
	while(1)
	{
		int nodecount=q.size();
		if(nodecount==0)
		break;
		
		while(nodecount>0)
		{
			struct node* n=q.front();
			cout<<n->data<<" ";
			q.pop();
			if(n->left!=NULL)
			q.push(n->left);
			if(n->right!=NULL)
			q.push(n->right);
			nodecount--;
		}
		cout<<endl;
	}
}


struct node* newn(int nx)
{
	struct node* n=new node;
	n->data=nx;
	
	n->left=n->right=NULL;
	return n;
}


int main()
{
	struct node* r=newn(1);
	r->left=newn(2);
	r->right=newn(3);
	r->left->left=newn(4);
	r->left->right=newn(5);
	r->right->right=newn(6);
	printlevel(r);
	return 0;
}
