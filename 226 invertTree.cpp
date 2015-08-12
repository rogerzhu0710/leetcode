TreeNode* invertTree(TreeNode* root) {
    if(root == NULL) return NULL;
    else if(root->left == NULL && root->right == NULL) return root;
    else
    {
        TreeNode* tmpRight = root->right;
        root->right=invertTree(root->left);
        root->left = invertTree(tmpRight);

    }
    return root;
}