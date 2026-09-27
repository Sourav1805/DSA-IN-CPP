class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
         int pre[arr.size()];
                pre[0]=arr[0];
                for(int i=1;i<arr.size();i++){
                    pre[i]=arr[i]+pre[i-1];
                }

                // 2 12 14
                // 1 0 -3 0 1 0 0
                // 1 1 -3 0 1 1 
                int maxLength=0;

                unordered_map<int,int>mp;
                // mp[0]=-1;
                // 1 2 4
                // 1 1 1
                // 1 2 3 2
                // 1 0
                // 1 2 3 k=3
                // 1 3 6
                // 1 0
                // 1 -1 0 0
                // 1 0 0 0
                // 1 1 1 k=2
                // 1 2 3
                // 1 0
                // 1 -1 0 k=0;
                // 1 0 0 0
                // 1 1
                // 0 1
                // 
                for(int i=0;i<arr.size();i++){
                    if(pre[i]==k){
                      
                        maxLength++;
                    
                    }
                    if(mp.find(pre[i]-k)!=mp.end()){
                        maxLength+=mp[pre[i]-k];

                    }if(mp.find(pre[i])==mp.end()){
                        mp[pre[i]]=1;
                    }
                    else mp[pre[i]]++;
                }
                return maxLength;
    }
};