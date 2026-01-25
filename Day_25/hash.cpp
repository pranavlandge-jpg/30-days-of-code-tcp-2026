void solve(TreeNode* root, vector<int> &in, vector<int> &pre, vector<int> &post) {
    
    if (root == NULL) {
        return;
    }
    pre.push_back(root->data);

    solve(root->left, in, pre, post);

    in.push_back(root->data);

    solve(root->right, in, pre, post);

    post.push_back(root->data);}




vector<vector<int>> getTreeTraversal(TreeNode *root) {
    
    vector<int> inorder, preorder, postorder;
    
    solve(root, inorder, preorder, postorder);

    vector<vector<int>> result;
    
    result.push_back(inorder);
    result.push_back(preorder);
    result.push_back(postorder);
return result;}