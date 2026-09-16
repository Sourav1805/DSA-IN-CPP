class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        vector<int>brr(arr.size());
    brr[0]=arr[0];
    for(int i=1;i<arr.size();i++){
        brr[i]=brr[i-1]+arr[i];
        
    }
    // unordered_set<int>s;
    map<int,int>mp;
    mp[0]=1;
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(mp.find(brr[i]-k)!=mp.end())count+=mp[brr[i]-k];
        mp[brr[i]]++;
        
    }
    return count;
        
    }
};


