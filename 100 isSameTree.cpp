bool isSameTree(TreeNode* p, TreeNode* q)
{

    if(p==NULL && q!=NULL) return false;

    else if(p!=NULL && q==NULL) return false;

    else if(p==NULL && q==NULL) return true;

	else

	{

	    // This line is copied from Internet

		if(p->val != q->val) return false;

		else return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);

	}

}