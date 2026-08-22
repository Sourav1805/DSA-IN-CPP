class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            sort(words[i].begin(),words[i].end());

        }
        int count=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(words[i]==words[j])count++;
            }
        }
        return count;
    }
};