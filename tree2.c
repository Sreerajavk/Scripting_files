#include<stdio.h>
#include<malloc.h>

struct node{
  struct node *left;
  struct nod *right;
  int data;
  };
struct node *tree=NULL;
struct node *insert(struct node *,int);
struct node *pre(struct node *);
struct node *post(struct node *);
struct in(struct node *);
struct node* delete(struct node *.int);
struct node *min(struct node *);

void main()

{

  int option,val;
