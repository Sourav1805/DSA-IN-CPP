class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>ans1;
    int ans=0;
    int ansdx=-1;
    for(int i=0;i<mat.size();i++){
        sort(mat[i].begin(),mat[i].end());
        int count=0;
       int lo=0;
       int hi=mat[i].size()-1;
       int fc=-1;
       while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(mat[i][mid]==1){
            fc=mid;
            hi=mid-1;

        }else lo=mid+1;
       }


       if(fc==-1)count=0;
       else count=mat[i].size()-fc;
        // ans=max(ans,co)
        if(count>ans){
            // ans=i;
            ans=max(ans,count);
            ansdx=max(ansdx,i);
            
            
        }
    }
    
    if(ansdx!=-1)ans1.push_back(ansdx);
    else ans1.push_back(0);
    ans1.push_back(ans);

    // if(ans1.size()==0){
    //      ans1.push_back(0);
    //         ans1.push_back(0);
            
    // }
    return ans1;

  }
};
 