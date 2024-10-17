#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node*left;
  struct node*right;
  };

  struct node*newNode(int data)
  {
      struct node*node
      =(struct node*)malloc(sizeof(struct node));
      node->data=data;
      node->left=NULL;
      node->right=NULL;

      return (node);

  }
  void printfPreorder(struct node*node)
  {
      if(node==NULL)
        return;

      printf("%d",node->data);

      printPreorder(node->left);

      printfPreorder(node->right);

  }

  int main()
  {
     int a[100],n,i;

     printf("How many elements are in array a:");
     scanf("%d",&n);

     printf("Enter the elements:");
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);

      struct node*root=newNode(a[1]);
      root->left=newNode(a[2]);
      root->right=newNode(a[3]);
      root->left->left=newNode(a[4]);
      root->left->right=newNode(a[5]);
      root->right->left=newNode(a[6]);
      root->right->right=newNode(a[7]);
      root->left->left->left=newNode(a[8]);

      printf("\nPreorder traversal of binary tree is\n ");
      printPreorder(root);


      getchar();
      return 0;
  }

