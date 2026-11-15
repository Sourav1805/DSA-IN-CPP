class Solution {
public:
    int helper(vector<int>&cost,int& ans,int idx,vector<int>&dp){
        if(idx==0 || idx==1)return cost[idx];
        // if(idx==cost.size())cost[idx]=0;
        if(dp[idx]!=-1)return dp[idx];
        dp[idx]=cost[idx]+min(helper(cost,ans,idx-1,dp),helper(cost,ans,idx-2,dp));

        return -1;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int ans=0;
        vector<int> dp(cost.size(),-1);
        // return min(helper(cost,ans,cost.size()-1,dp),helper(cost,ans,cost.size()-2,dp));
        // return ans;
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<cost.size();i++){
            dp[i]=min(cost[i]+dp[i-1],cost[i]+dp[i-2]);
        }
        return min(dp[cost.size()-1],dp[cost.size()-2]);

    }
};