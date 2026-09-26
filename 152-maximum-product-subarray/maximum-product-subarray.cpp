class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre=1;
        int suff=1;
        int maxAns=-1e9;
        for(int i=0;i<nums.size();i++){
            if(pre==0)pre=1;
            if(suff==0)suff=1;
            pre*=nums[i];
            suff*=nums[nums.size()-i-1];
            maxAns=max(maxAns,max(pre,suff));

        }
        return maxAns;
    }
};