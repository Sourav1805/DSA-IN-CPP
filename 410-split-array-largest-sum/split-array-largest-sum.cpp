class Solution {
public:
    bool check(int mid,vector<int>nums,int k){
        int s=1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mid)return false;
            sum+=nums[i];
            if(sum>mid){
                s++;
                sum=nums[i];
            }
        }
        if(s<=k)return true;
        return false;

    }
    int splitArray(vector<int>& nums, int k) {
        
       


        // [7]  [2 5 10 8]  25
        // [7 2] [5 10 8]   23
        // [7 2 5] [10 8]  18
        // [7 2 5 10] [8]   24

        // [1] [2 3 4 5]  14
        // [1 2] [3 4 5] 12 
        // [1 2 3] [4 5] 9

        // [1 2 3 4] [5] 10
        // 0 to 15
        int lo=0;
        int hi=0;
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            hi+=nums[i];
        } 
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(check(mid,nums,k)==true){
                ans=mid;
                hi=mid-1;

            }

            else lo=mid+1;
        }
        return ans;

        
    }
};