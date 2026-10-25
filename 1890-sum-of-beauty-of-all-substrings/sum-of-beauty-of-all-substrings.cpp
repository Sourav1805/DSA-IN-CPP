class Solution {
public:
    int beauty(vector<int>&p){
        int maxSum=-1e9;
        int minSum=1e9;
        for(int i=0;i<p.size();i++){
            if(p[i]>0){
                maxSum=max(maxSum,p[i]);
                minSum=min(minSum,p[i]);
            }
        }
       return maxSum-minSum;
    }
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            vector<int>p(26,0);
            for(int j=i;j<s.size();j++){
                p[s[j]-'a']++;
                ans+=beauty(p);

            }
        }
        return ans;
    }
};