//CODE FOR GOOD; CODE TO HELP
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	node* left;
	node* right;
}
struct node* root;
struct node* insert(struct node* r,int datatonode)
{
	if(r = NULL)
	{
		r = (struct node*)malloc (sizeof(struct node));
		r->data = datatonode;
		r->left = NULL;
		r->right = NULL;
	}
	else if(datatonode < r->data)
		r->left= insert(r->left,datatovalue);
	else
		r->rigth = insert(r->right,datatovalue);
	return r;
}
void inOrder(struct node* r)
{
	if(r!= NULL)
	{
		inOrder(r->left);
	    printf("%d",r->data);
		inOrder(r->right);
	}
}
void preOrder(struct node* r)
{
	if(r!= NULL)
	{
		printf("%d",r->data);
		preOrder(r->left);
		preOrder(r->right);
	}
}
void postOrder(struct node* r)
{
	if(r!= NULL)
	{
		postOrder(r->left);
		postOrder(r->right);
		printf("%d",r->data);
	}
}

int main()
{
root = NULL;
int number,value;
printf("entre the number of element to be inserted ?\n");
scanf("%d",&number);
for(int i=0;i<n;i++)
{
	printf("Data no %d is",i+1);
	scanf("%d",&value);
	root = insert(root,value);
}
printf("========INRODER TARVERSAL===========");
inOrder(root);
printf("\n");
printf("=======PREORDER TRAVERSAL===========");
preOrder(root);
printf("\n");
printf("=======POSTORDRER TRAVERSAL=========");
postOrder(root);
printf("\n");
getch();
return 0;
}
