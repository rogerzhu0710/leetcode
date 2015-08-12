int maxDepth(TreeNode* root) {

    int left = 0, right = 0;

    if(root == NULL) return 0;

    else if(root->left == NULL && root->right == NULL) return 1;

    else

    {

        left = maxDepth(root->left)+1;

        right = maxDepth(root->right)+1;

    }

    return left>right?left:right;

}