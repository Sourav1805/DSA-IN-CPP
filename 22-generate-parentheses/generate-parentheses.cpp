class Solution {
public:
    void helper(vector<string>&ans,string s,int open,int close,int n ){
        if(open==n && close==n){
            ans.push_back(s);
            return;
        }

        if(open<n)helper(ans,s+'(',open+1,close,n);
        if(close<open)helper(ans,s+')',open,close+1,n);
        
    }
    vector<string> generateParenthesis(int n) {
        int open=0;
        int close=0;
        vector<string>ans;
        helper(ans,"",open,close,n);
        return ans;

    }
};