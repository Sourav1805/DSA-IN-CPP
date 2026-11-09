class Solution {
public:
    int totallevel(TreeNode* root){
        if(root==NULL)return 0;
        return 1+max(totallevel(root->left),totallevel(root->right));

    }
    void level(TreeNode* root,vector<int>&ans1,int curr,int final)
    {
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
    
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        int n=totallevel(root);
        for(int i=1;i<=n;i++){
            vector<int>temp;
            level(root,temp,1,i);
            ans.push_back(temp);
        }
        return ans;
    }
};