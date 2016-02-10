# include<bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	struct node *next;
};

struct node *reverse(struct node *head,int k)
{
	struct node *cur=head;
	struct node *next=NULL;
	struct node *prev=NULL;
	int count=0;
	
	while(cur!=NULL && count<k)
	{
		next=cur->next;
		cur->next=prev;
		prev=cur;
		cur=next;
		count++;
	}
	
	if(next!=NULL)
	head->next=reverse(next,k);
	
	return prev;
}


void push(struct node **head,int nx)
{
	struct node *n=new node;
	n->data=nx;
	n->next=*head;
	*head=n;
}


void print(struct node *nx)
{
	struct node *n=nx;
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}


int main()
{
	struct node *head=NULL;
	
	push(&head,9);
	push(&head,8);
	push(&head,7);
	push(&head,6);
	push(&head,5);
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);
	cout<<"given linked list is\n";
	print(head);
	head=reverse(head,3);
	cout<<"\nafter reversing it we get\n";
	print(head);
	return 0;
}
