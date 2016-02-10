# include<bits/stdc++.h>

# include"trees.h"

using namespace std;

void printarray(int arr[],int len)
{
	for(int i=0;i<len;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}



void printpathrecur(struct node *n,int path[],int pathlen)
{
	if(n==NULL) return ;
	path[pathlen]=n->data;
	pathlen++;
	
	if(n->left==NULL && n->right==NULL)
	printarray(path,pathlen);
	
	else
	
	{
		printpathrecur(n->left,path,pathlen);
		printpathrecur(n->right,path,pathlen);
	}
}

void printpaths(struct node *node)
{
	int path[100];
	printpathrecur(node,path,0);
}

int main()
{
		struct node *r=newn(1);
	r->left=newn(2);
	r->right=newn(3);
	r->left->left=newn(4);
	r->left->right=newn(5);
	
	cout<<"All the root to leaf paths are\n";
	printpaths(r);
	return 0;
}

