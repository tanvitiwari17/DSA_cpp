vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> v;
    if(root==NULL)
    return v;

    queue<Node*> Q;
    Q.push(root);

    while(!Q.empty())
    {
        Node* temp = Q.front();
        v.push_back(temp->data);

        if(temp->right!=NULL)
        Q.push(temp->right);
        if(temp->left!=NULL)
        Q.push(temp->left);

        Q.pop();

    }

    reverse(v.begin(),v.end());
    return v;
}
