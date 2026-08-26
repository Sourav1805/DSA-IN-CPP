class Solution {
public:
    int rev(int n){
        int ans=0;
        while(n>0){
            int ld=n%10;
            ans=ans*10+ld;
            n/=10;
        }
        return ans;
    }

    
    void helper(vector<int>&nums,int&  count){
        for(int i=0;i<nums.size();i++){
            nums[i]-=rev(nums[i]);
        }
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            // mp[nums[i]]++;
            count=count%1000000007;
            count+=mp[nums[i]];
            mp[nums[i]]++;
        }
        
    }
    int countNicePairs(vector<int>& nums) {
        int count=0;
        helper(nums,count);
        return count%1000000007;
    }
};


