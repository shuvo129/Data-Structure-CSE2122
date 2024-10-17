#include <stdio.h>
#include <stdlib.h>

// Basic struct of Tree
struct node
{
    int val;
    struct node *left, *right;
};

// Function to create a new Node
struct node* newNode(int item)
{
    struct node* temp =  (struct node *)malloc(sizeof(struct node));
    temp->val = item;
    temp->left = temp->right = NULL;
    return temp;
}

// Function print the node in preorder format, when insertion is complete
void preorder(struct node* root)
{
    if (root != NULL)
    {
        printf("%d ", root->val);
        preorder(root->left);
        preorder(root->right);
    }
}

// Here we are finding where to insert the new node so BST is followed
struct node* insert(struct node* node, int val)
{
    /* If the tree(subtree) is empty, return a new node by calling newNode func.*/
    if (node == NULL) return newNode(val);

    /* Else, we will do recursion down the tree to further subtrees */
    if (val < node->val)
        node->left  = insert(node->left, val);
    else if (val > node->val)
        node->right = insert(node->right, val);

    /* (Safety) return the node's pointer which is unchanged */
    return node;
}

int main()
{
    /* Our BST will look like this
              200
           /     \
          120     280
         /  \    /  \
       80   160 240  320 */
    struct node* root = NULL;
    root = insert(root, 12);
    insert(root, 23);
    insert(root, 34);
    insert(root, 45);
    insert(root, 11);
    insert(root, 13);
    insert(root, 23);


    // Finally printing the tree using preorder
    preorder(root);

    return 0;
}
