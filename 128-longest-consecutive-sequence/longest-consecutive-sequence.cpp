class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        int maxCount=0;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])continue;
            if(nums[i]==(nums[i-1]+1))count++;
            else {
                maxCount=max(maxCount,count);
                count=1;
            }

        }
        maxCount=max(maxCount,count);

        return maxCount;
    }
    // 0 0 1 2 3 4 5 6 7 8
    // 1 2 6 7 8
    // 1 2 3 4 100 200
    // 0 1 1 2
};