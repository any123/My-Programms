# include<bits/stdc++.h>

using namespace std;

// Merge sort in a LL

struct node
{
	int data;
	node *next;
};

struct node * sortedmerge(struct node *a,struct node *b)
{
	struct node *res=NULL;
	if(a==NULL) return b;
	if(b==NULL) return a;
	
	if(a->data<=b->data)
	{
		res=a;
		res->next=sortedmerge(a->next,b);
	}
	else
	{
		res=b;
		res->next=sortedmerge(a,b->next);
	}
	return res;
}

void split(struct node *source,struct node **frontref,struct node **backref)
{
	struct node *fast,*slow;
	
	if(source==NULL || source->next==NULL)
	{
		*frontref=source;
		*backref=NULL;
	}
	else
	{
		slow=source;
		fast=source->next;
	}
	while(fast!=NULL && fast->next!=NULL)
	{
				slow=slow->next;
		fast=fast->next->next;
	}
	
	
	*frontref=source;
	*backref=slow->next;
	slow->next=NULL;
}

void print(struct node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}

void push(struct node **head,int x)
{
	struct node *n=new node;
	n->data=x;
	n->next=(*head);
	(*head)=n;
}
void mergesort(struct node **head)
{
	struct node *h=*head;
	struct node *a,*b;
	
	if((h==NULL)|| (h->next==NULL))
	return;
	
	split(h,&a,&b);
	mergesort(&a); 
	mergesort(&b);
	
	*head=sortedmerge(a,b);
}

int main()
{
	struct node *res=NULL,*a=NULL;
	push(&a,15);
	push(&a,10);
	push(&a,5);
	push(&a,20);
	push(&a,3);
	push(&a,2);
	cout<<"intial list is\n";
	print(a);
	mergesort(&a);
	cout<<"\nsorted linked list is\n";
	print(a);
	return 0;
}

