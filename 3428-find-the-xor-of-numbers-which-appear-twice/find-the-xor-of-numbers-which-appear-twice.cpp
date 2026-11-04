class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans=0;
          unordered_map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second==2)ans^=it.first;
        }
        return ans;
    }
};