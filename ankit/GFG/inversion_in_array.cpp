# include<bits/stdc++.h>

using namespace std;

struct node
{
	int key,height,size;
	node *left,*right;
};

int height(struct node * N)
{
	if(N==NULL) return 0;
	else
	return N->height;
}

int size(struct node * N)
{
	if(N==NULL) return 0;
	return N->size;
}

struct node *newn(int x)
{
	struct node * N=new node;
	N->left=N->right=NULL;
	N->key=x;
	N->height=N->size=1;
}
int max(int a, int b)
{
	return a>b? a:b;
}
struct node * rightrotate(struct node * y)
{
	struct node * x=y->left;
	struct node * T2=x->right;
	
	x->right=T2;
	y->left=T2;
	
	y->height=max(height(y->left),height(y->right))+1;
	x->height=max(height(x->left),height(x->right))+1;
	
	y->size=size(y->left)+size(y->right)+1;
	x->size=size(x->left)+size(x->right)+1;
	
	return x;
}

struct node * leftrotate(struct node * x)
{
	struct node * y=x->right;
	struct node * T2=y->left;
	
	y->left=T2;
	x->right=T2;
	
	y->height=max(height(y->left),height(y->right))+1;
	x->height=max(height(x->left),height(x->right))+1;
	
	y->size=size(y->left)+size(y->right)+1;
	x->size=size(x->left)+size(x->right)+1;
	
	return y;
}

int getbal(struct node *n)
{
	if(n==NULL)
	return 0;
	
	return height(n->left)- height(n->right);
}

struct node * insert(struct node *n,int x,int *res)
{
	if(n==NULL)
	return(newn(x)); 
	if(x<n->key)
	{
		n->left=insert(n->left,x,res);
		*res=*res+size(n->right)+1;
	}
	else
	n->right=insert(n->right,x,res);
	
	n->height=max(height(n->left),height(n->right))+1;
	n->size=size(n->left)+ size(n->right)+1;
	
	int bal=getbal(n);
	
	if(bal>1 && x<n->left->key)
	return rightrotate(n);
	if(bal<-1 && x > n->right->key)
	return leftrotate(n);
	if(bal>1 &&x >n->left->key)
	{
		n->left=leftrotate(n->left);
		return rightrotate(n);
	}
	if(bal<-1 && x<n->right->key)
	{
		n->right=rightrotate(n->right);
		return leftrotate(n);
	}
	return n;
}

int getinvcount(int arr[],int n)
{
	struct node *root=NULL;
	int res=0;
	
	for(int i=0;i<n;i++)
	root=insert(root,arr[i],&res);
	return res;
}
int main()
{
	int arr[]={8,4,2,1};
	int n=sizeof(arr)/sizeof(int);
	cout<<"Number of inversion counts are: "<<getinvcount(arr,n);
	return 0;
}
