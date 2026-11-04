class Solution {
public:
    int count(int x){
        int ans=0;
        while(x!=0){
            ans++;
            x=x&(x-1);
        }
        return ans;
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            ans.push_back(count(i));
        }
        return ans;
    }
};