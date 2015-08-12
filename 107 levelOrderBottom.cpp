vector<vector<int> > levelOrderBottom(TreeNode* root)
{

    vector<vector<int> > res;

    if(root == NULL) return res;





    vector<int> tmp;

    queue<TreeNode*> qTree;

    stack<TreeNode*> sTree;



    qTree.push(root); 



    int size = qTree.size();

    sTree.push(NULL);

    while(qTree.size()!=0)

    {

        while(size!=0)

        {

            TreeNode* NodeTmp = qTree.front();

            if(NodeTmp->right)

                qTree.push(NodeTmp->right);

            if(NodeTmp->left)

                qTree.push(NodeTmp->left);

            qTree.pop();

            sTree.push(NodeTmp);

            size--;

        }

        sTree.push(NULL);

        size = qTree.size();

    }

    int count = 0;

    sTree.pop();

    while(sTree.size()!=0)

    {

        TreeNode* NodeTmp = sTree.top();

        if(NodeTmp!=NULL)

        {

            tmp.push_back(NodeTmp->val);

        }

        else

        {

            count++;

            res.push_back(tmp);

            tmp.clear();

        }

        sTree.pop();

    }

    //cout<<"Count:"<<count<<endl;

    return res;

}