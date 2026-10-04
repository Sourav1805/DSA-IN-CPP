class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int maxLength=0;
        int length=0;
        unordered_map<char,int>mp;


        while(j<s.size()){
            if(mp.find(s[j])==mp.end())
            {
                // ye ladki itna haap kyu rhi
                maxLength=max(maxLength,j-i+1);
               
            }else{
                // maxLength=max(maxLength,length);
                i=max(i,mp[s[j]]+1);
                maxLength=max(maxLength,j-i+1);
            }
            mp[s[j]]=j;
            j++;

        }
        return maxLength;

    }
};