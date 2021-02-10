#include <iostream>
#include <bits/stdc++.h>
#include<malloc.h>
using namespace std;

struct node{
int data;
node* left;
node* right;
};

node* createnode(int val)
{
    node * newnode= (node*)malloc(sizeof(node));
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void inorder(node* root){
if(root==NULL)
   return;
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);
}

void mirror(node *root)
{
    if (root->right == NULL || root->left == NULL)
        return;
    node* t = root->left;
    root->left = root->right;
    root->right = t;

    if (root->left)
        mirror(root->left);
    if (root->right)
        mirror(root->right);
}
int main()
{
    node* tree =createnode(5);
    tree->left =createnode(3);
    tree->right = createnode(6);
    tree->left->left=createnode(2);
    tree->right->right=createnode(4);
    cout<<"Inorder of original tree: ";
    inorder(tree);
    mirror(tree);

    cout<<"\nInorder of mirror tree: ";
    inorder(tree);
    return 0;
}
