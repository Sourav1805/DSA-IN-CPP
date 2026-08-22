class Solution {
public:
    int reverse(int n){
        int ans=0;
        while(n>0)
        {
            int ld=n%10;
            ans=ans*10+ld;
            n/=10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(reverse(nums[i]));

        }
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        return st.size();
    }
};