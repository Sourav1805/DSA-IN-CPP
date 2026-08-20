/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>vec;
    int change(TreeNode* root,int &sum,int val)

    {
        if(root==NULL)return 0;
        if(root->val>=val)sum+=root->val;
        change(root->left,sum,val);
        change(root->right,sum,val);
        return sum;



    }
    void helper(TreeNode* root,TreeNode* temp){
        if(root==NULL)return;
        int sum=0;
        
        vec.push_back(change(temp,sum,root->val));
        helper(root->left,temp);
        helper(root->right,temp);
        //  root->val=change(temp,sum,root->val);

    }
    void helper2(TreeNode* root,int& i){
        if(root==NULL)return;
        root->val=vec[i++];
        helper2(root->left,i);
        helper2(root->right,i);
    }
    TreeNode* bstToGst(TreeNode* root) {
        TreeNode* temp=root;
        helper(root,temp);
        int idx=0;
        helper2(root,idx);

        return root;
    }
};