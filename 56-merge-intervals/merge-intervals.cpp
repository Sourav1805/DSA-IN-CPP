class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>>ans;
        sort(in.begin(),in.end());
        int j=0;
        ans.push_back(in[j]);
        
    
        for(int i=1;i<in.size();i++){
            if(in[i][0]<=ans[j][1])ans[j][1]=max(ans[j][1],in[i][1]);
            else {
                ans.push_back(in[i]);
                j++;
            }
        }
        return ans;
        
    }
};