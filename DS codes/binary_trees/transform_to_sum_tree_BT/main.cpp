int solve(Node* node){
    if(!node)
    return 0;
    int a=solve(node->left);
    int b=solve(node->right);
    int x=node->data;
    node->data=a+b;
    return a+b+x;

}

void toSumTree(Node *node)
{
    // Your code here
    solve(node);
}
