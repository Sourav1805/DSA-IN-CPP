class Solution {
public:
    // set<vector<int>>st;
    void helper(vector<int>& candidates, int target,vector<vector<int>>&ans,vector<int>temp,int idx){
        // if(target<0)return;

        if(target==0)
        {
            // if(st.find(temp)==st.end()){
               
         ans.push_back(temp);
        //   st.insert(temp);
          return;
         
        }
        if(target<0 ||idx==candidates.size()){
            // ans.push_back(temp);
            return;

        }
        // if(target==0)
        // {
        //     // if(st.find(temp)==st.end()){
               
        //  ans.push_back(temp);
        // //   st.insert(temp);
        //   return;
         
        //     }
           

        
        temp.push_back(candidates[idx]);
        helper(candidates,target-candidates[idx],ans,temp,idx+1);
        // helper(candidates,target-candidates[idx],ans,temp,idx);
        temp.pop_back();
        int idxp=idx+1;
        while(idxp<candidates.size()&& candidates[idxp]==candidates[idxp-1])idxp++;
        helper(candidates,target,ans,temp,idxp);

        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>temp;
        helper(candidates,target,ans,temp,0);
        return ans;
    }
};