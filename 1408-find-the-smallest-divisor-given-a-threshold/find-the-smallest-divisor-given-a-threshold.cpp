class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        // divisor 1 y to divisor 9 hoga
        int lo=1,hi=-1e9;
        for(int i=0;i<nums.size();i++){
            // lo=min(lo,nums[i]);
            hi=max(hi,nums[i]);

        }
        // return hi;
        // 1 2 3 4 5 6 7 8 9
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int sum=0;
            for(int i=0;i<nums.size();i++){
                
                if(nums[i]%mid==0)sum+=(nums[i]/mid);
                else sum+=(nums[i]/mid +1);
            }
            if(sum<=threshold)hi=mid-1;
            else lo=mid+1;

        }
        return lo;
        
    }
};