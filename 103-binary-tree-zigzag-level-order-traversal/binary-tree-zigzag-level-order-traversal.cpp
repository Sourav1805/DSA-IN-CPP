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
    int totallevel(TreeNode* root){
        if(root==NULL)return 0;
        return 1+max(totallevel(root->left),totallevel(root->right));

    }
    void level(TreeNode* root,vector<int>&ans1,int curr,int final)
    {

        // vector<int>ans1;
        if(root==NULL)return;
        
        
        if(curr==final){
            ans1.push_back(root->val);
            return;
        }
       
        if(final%2!=0){

        
        level(root->left,ans1,curr+1,final);
        level(root->right,ans1,curr+1,final);
        }
        else{
            level(root->right,ans1,curr+1,final);
            level(root->left,ans1,curr+1,final);
        }


    }
    //  void levelreverse(TreeNode* root,vector<int>&ans1,int curr,int final)
    // {

    //     // vector<int>ans1;
    //     if(root==NULL)return;
    //     if(curr==final){

        
    //     ans1.push_back(root->val);
    //     return;
    //     }
        
    //     levelreverse(root->right,ans1,curr+1,final);
    //     levelreverse(root->left,ans1,curr+1,final);


    // }
    void helper(TreeNode* root,vector<vector<int>>&ans){
        int n=totallevel(root);
        for(int i=1;i<=n;i++){
            vector<int>ans1;
            level(root,ans1,1,i);
            ans.push_back(ans1);

        }
        // level(root,ans1,1,n);
            
        // ans.push_back(ans1);


        }
       
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        helper(root,ans);
        return ans;
    }
};