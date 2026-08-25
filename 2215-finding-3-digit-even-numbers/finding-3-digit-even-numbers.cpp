class Solution {
public:
    void helper(vector<int>&digits,vector<int>&ans,int i){
        unordered_map<int,int>mp;
        for(int i=0;i<digits.size();i++){
            mp[digits[i]]++;
        }
            int x=i;    
            int fd=i%10;
            i/=10;
            int sd=i%10;
            i/=10;
            int td=i%10;
            if(mp.find(fd)!=mp.end()){
                mp[fd]--;
                if(mp[fd]==0)mp.erase(fd);
                if(mp.find(sd)!=mp.end()){
                    mp[sd]--;
                    if(mp[sd]==0)mp.erase(sd);
                    if(mp.find(td)!=mp.end()){
                        mp[td]--;
                        ans.push_back(x);
                        if(mp[td]==0)mp.erase(td);
                    }
                }
            }

        
    }
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>ans;
        for(int i=100;i<=999;i+=2)
        helper(digits,ans,i);
        return ans;
    }
};