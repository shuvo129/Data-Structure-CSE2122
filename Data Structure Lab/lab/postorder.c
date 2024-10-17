#include <stdio.h>
#include <stdlib.h>

struct tree {
    int val;
    struct tree* left;
    struct tree* right;
};

typedef struct tree TreeNode;

TreeNode* newTree(int data)
{
    // Allocate memory for new node
    TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));

    // Assign data to this node val
    root->val = data;

    // Initialize left and right children as NULL
    root->left = NULL;
    root->right = NULL;
    return (root);
}

void postorder(TreeNode* root)
{
    //base case
    if (root == NULL)
        return;

    // fisrt traverse left sub tree
    postorder(root->left);

    //secondly traverse right sub tree
    postorder(root->right);

    //finally traverse current node
    printf("%d ", root->val);
}

int main()
{
    //building the tree
    TreeNode* t = newTree(7);
    t->left = newTree(1);
    t->left->left = newTree(0);
    t->left->right = newTree(3);
    t->left->right->left = newTree(2);
    t->left->right->right = newTree(5);
    t->left->right->right->left = newTree(4);
    t->left->right->right->right = newTree(6);
    t->right = newTree(9);
    t->right->left = newTree(8);
    t->right->right = newTree(10);

    printf("postorder traversal of the above tree is:\n");

    postorder(t);

    return 0;
}
