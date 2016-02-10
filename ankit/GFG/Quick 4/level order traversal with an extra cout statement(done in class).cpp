#include <iostream.h>
#include <stdlib.h>
 
 using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
   char data;
   struct node* left;
   struct node* right;
};
 
 void fun(struct node *r)
 {
 	if(r==NULL)  return;
 	
 	fun(r->left);
 	cout<<r->data<<" ";
 	fun(r->right);
 	cout<<r->data<<" ";
 	
 }
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(char data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
 
  return(node);
}
 
/* Driver program to test above functions*/
int main()
{
 
  /* Constructed binary tree is
            1
          /   \
        2      3
      /  \    /
    4     5  8 
  */
  struct node *root = newNode('A');
  root->left        = newNode('B');
  root->right       = newNode('C');
  root->left->left  = newNode('D');
  root->left->right = newNode('E');
  root->right->left = newNode('F');  
 
  fun(root);
 
  getchar();
  return 0;
}

