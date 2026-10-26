class Solution {
public:
    int dp[1001][1001];
    bool check(int i,int j, string& p){
        if(i>=j)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        if(p[i]==p[j]) return dp[i][j]= check(i+1,j-1,p);
        return dp[i][j]=0;
    
    }
    string longestPalindrome(string s) {
        int maxLength=-1e9;
        int ans=-1;
        memset(dp,-1,sizeof(dp));

        for(int i=0;i<s.size();i++){
            // string p="";
            for(int j=i;j<s.size();j++){
                // p+=s[j];
                if(check(i,j,s)){
                    if( j-i+1 >maxLength)
                    {
                        maxLength=max(maxLength,j-i+1);
                        ans=i;
                    }
                }

            }
        }
        return s.substr(ans,maxLength);
    }
};