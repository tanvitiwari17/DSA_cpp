unordered_map<string,int> m;
string solve(Node *root){
    if(!root) return "N";
    string s=" ";
    if(!root->left and !root->right){
    s = to_string(root->data);
    return s;
    }
    s = s + to_string(root->data);
    s = s + solve(root->left);
    s = s + solve(root->right);
    m[s]++;
    return s;
}
bool dupSub(Node *root)
{
     //your code here
     m.clear();
     solve(root);
     for(auto x:m){
         if(x.second>=2)
         return true;
     }
     return false;
}
