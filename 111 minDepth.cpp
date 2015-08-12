int minDepth(TreeNode* root) {

    int left = 65535,right = 65535;

    if(root == NULL) return 0;

    else if(root->left == NULL && root->right == NULL) return 1;

    else if(root->left == NULL)

    {

        return minDepth(root->right) + 1;

    }

    else if(root->right == NULL)

    {

        return minDepth(root->left) + 1;

    }

    else

    {



        left = min(left,minDepth(root->left)+1);

        right = min(right,minDepth(root->right)+1);

        return left>right?right:left;

    }

}