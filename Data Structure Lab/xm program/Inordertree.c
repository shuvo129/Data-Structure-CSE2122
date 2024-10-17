#include<stdio.h>
#include<stdlib.h>

struct node{
        int data;
        struct node* left;
        struct node* right;
    };

struct node* newNode(int data)
    {
        struct node*node
        =(struct node*)malloc(sizeof(struct node));
        node-> data=data;
        node->left=NULL;
        node->right=NULL;

        return(node);

    };
    void printInorder(struct node*node)
    {
        if(node==NULL)
            return;

        printInorder(node->left);
        printf("%d",node->data);
        printInorder(node->right);
    }

    int main(){

        int a[100],n,i;

        printf("How many elements in array a:");
        scanf("%d",&n);

        printf("Enter the elements in array a:\n");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        struct node*root=newNode(a[0]);
        root->left=newNode(a[1]);
        root->right=newNode(a[2]);
        root->left->left=newNode(a[3]);
        root->left->right=newNode(a[4]);
        printf("\nInorder traversal of binary tree is \n");
        printInorder(root);

        getchar();
        return 0;


    }
