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
    void helper(TreeNode* root,int ans,int& minans){
        if(root==NULL){
            if(minans<ans)minans=ans;
            return;

        }
        ans+=1;
        helper(root->left,ans,minans);
        helper(root->right,ans,minans);
    }
    int maxDepth(TreeNode* root) {
        int minans=INT_MIN;
        int ans=0;
        helper(root,ans,minans);
        return minans;

    }
};