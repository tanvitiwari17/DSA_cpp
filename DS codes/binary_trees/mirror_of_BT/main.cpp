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

void mirrorify(node *root,node ** mirror)
{
    if(root==NULL){
        mirror=NULL;
        return;
    }
    *mirror=createnode(root->data);
    mirrorify(root->left,&((*mirror)->right));
    mirrorify(root->right,&((*mirror)->left));
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
    node* mirror =NULL;
    mirrorify(tree,&mirror);

    cout<<"\nInorder of mirror tree: ";
    inorder(mirror);
    return 0;
}
