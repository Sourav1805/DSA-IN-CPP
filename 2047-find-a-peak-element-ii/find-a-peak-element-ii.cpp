class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        vector<int>ans;
        int maxAns=-1e9;
        int k=-1,l=-1;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]>maxAns){
                    maxAns=max(maxAns,mat[i][j]);
                    k=i;
                    l=j;
                }
            }
        }
        ans.push_back(k);
        ans.push_back(l);
        return ans;
    }
};