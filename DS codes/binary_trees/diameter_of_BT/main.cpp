int height(Node* root)
{
    if(root==NULL)
    return 0;
    return 1+max(height(root->left),height(root->right));
}
int diameter(Node* root) {
    if (root==NULL)
    return 0;

    //through root
    int opt1=height(root->left)+height(root->right)+1;
    //not through root;
    int opt2=max(diameter(root->left),diameter(root->right));

    return max(opt1,opt2);
}
