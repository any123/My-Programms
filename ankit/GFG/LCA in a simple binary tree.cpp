# include<bits/stdc++.h>
using namespace std;

struct node
{
	int key;
	node *left,*right;
	
};
struct node*newn(int x)
{
	struct node *n=new node;
	n->key=x;
	n->left=n->right=NULL;
	return n;
}

struct node* findLCAUtil(struct node* root,int n1,int n2,bool &v1,bool &v2)
{
	if(root==NULL) return NULL;
	if(root->key==n1)
	{
		v1=true;
		return root;
	}
	if(root->key==n2)
	{
		v2=true;
		return root;
	}
	node *left_lca=findLCAUtil(root->left,n1,n2,v1,v2);
	node *right_lca=findLCAUtil(root->right,n1,n2,v1,v2);
	
	if(left_lca && right_lca) return root;
	
	return(left_lca!=NULL)?left_lca:right_lca;
	
}


bool find(struct node*root,int k)
{
	if(root==NULL)
	return false;
	
	if(root->key==k ||find(root->left,k)||find(root->right,k)) 
	return true;
	
	return false;
	
}

struct node* findLCA(struct node*root, int n1,int n2)
{
	bool v1=false,v2=false;
	
	node* lca=findLCAUtil(root,n1,n2,v1,v2);
	
	if(v1 && v2 || v1 && f*ind(lca,n2) || v2 && find(lca,n1))
	return lca;
	
	return NULL;
	
}

int main()
{
	struct node* r=newn(1);
	r->left=newn(2);
	r->right=newn(3);
	r->left->left=newn(4);
	r->left->right=newn(5);
	r->right->left=newn(6);
	r->right->right=newn(7);
	
	node *lca=findLCA(r,4,5);
	
	if(lca!=NULL)
	
	cout<<"LCA of 4 and 5 is: "<<lca->key;
	else
	cout<<"LCA not found";
	return 0;
}


