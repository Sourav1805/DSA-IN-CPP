class Solution {
public:
int helper(vector<int>&nums,int idx,vector<int>&dp){
    if(idx>=nums.size())return 0;
    if(dp[idx]!=-1)return dp[idx];
    return dp[idx]=max(nums[idx]+helper(nums,idx+2,dp),helper(nums,idx+1,dp));
}
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        // memset(dp,-1,dp.size())
        return helper(nums,0,dp);

    }
};