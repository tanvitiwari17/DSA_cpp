vector<int> rightView(Node *root)
{
   // Your Code here
   vector <int> v;
   queue <Node* > q;
   if(root==NULL)
   return v;
   q.push(root);
   while(!q.empty()){
       // v.push_back(q.front()->data);
        int l=q.size();
        while(l)
       {
           Node*temp=q.front();
           q.pop();

           if(temp->left!=NULL)
           q.push(temp->left);
           if(temp->right!=NULL)
           q.push(temp->right);

           if(l==1)
           v.push_back(temp->data);
           l--;
        }
   }
   return v;
}

