vector<vector<int>> levelOrder(TreeNode* root)

{

    vector<vector<int>> res;

    if(root == NULL) return res;





    vector<int> tmp;

    queue<TreeNode*> qTree;



    if(root->left)

        qTree.push(root->left);

    if(root->right)

        qTree.push(root->right);

    tmp.push_back(root->val);

    res.push_back(tmp);



    int size = qTree.size();

    while(qTree.size()!=0)

    {

        tmp.clear();

        while(size!=0)

        {

            TreeNode* NodeTmp = qTree.front();

            if(NodeTmp->left)

                qTree.push(NodeTmp->left);

            if(NodeTmp->right)

                qTree.push(NodeTmp->right);



            qTree.pop();

            tmp.push_back(NodeTmp->val);

            size--;

        }

        res.push_back(tmp);

        size = qTree.size();

    }



    return res;



}