#include<stdio.h>
//#include<stdlib.h>
struct node {
    int data;
    struct node* left;
     struct node* right;
};
 struct node* newNode(int data){
    struct node* node
    =(struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);

}
void printPreorder(struct node* node)
{
    if (node == NULL)
        return;

    printf("%d ", node->data);

    printPreorder(node->left);

    printPreorder(node->right);
}
int main()
{
    int a[50],n,i;
    printf("how many number of element in array a:");
    scanf("%d",&n);
    printf("element of array a: \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    struct node* root = newNode(a[0]);
    root->left = newNode(a[1]);
    root->right = newNode(a[2]);
    root->left->left = newNode(a[3]);
    root->left->right = newNode(a[4]);
    root->right->left = newNode(a[5]);
    root->right->right = newNode(a[6]);



    printf("\nPreorder traversal of binary tree is \n");
    printPreorder(root);
    return 0;
}

