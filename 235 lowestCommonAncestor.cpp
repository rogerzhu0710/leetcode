TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if( root == NULL ) return NULL;
    else if( p == NULL || q == NULL )
    {
        if(p) return p;
        else if(q) return q;
        else return root;
    }

    if( p->val == root->val ) return p;
    else if( q->val ==  root->val ) return q;
    else if( (p->val < root->val) && (q->val > root->val) ) return root;
    else if( (p->val > root->val) && (q->val < root->val) ) return root;
    else
    {
        if( (p->val < root->val) && (q->val < root->val) )
            return lowestCommonAncestor(root->left,p,q);
        if( (p->val > root->val) && (q->val > root->val) )
            return lowestCommonAncestor(root->right,p,q);
    }

}