class Solution {
public:
    void helper(vector<int>&nums,vector<vector<int>>&ans,vector<int>ans1,int i)
    {
        if(i==nums.size()){
            ans.push_back(ans1);
            return;
        }
        ans1.push_back(nums[i]);
        helper(nums,ans,ans1,i+1);
         ans1.pop_back();
        helper(nums,ans,ans1,i+1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ans1;
        helper(nums,ans,ans1,0);
        return ans;
    }
};