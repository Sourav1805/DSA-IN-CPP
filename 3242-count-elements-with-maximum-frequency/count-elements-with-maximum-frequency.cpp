class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int arr[101];
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;

        }
        int count=INT_MIN;
        for(int i=0;i<101;i++)
        {
            count=max(count,arr[i]);
        }
        // return count;
        int ans=0;
        for(int i=0;i<101;i++){
            if(arr[i]==count)ans+=count;
        }
        return ans;
    }
};