class Solution {
public:
    int longestValidParentheses(string s) {
    //    2
    // 1

        int oc=0;
        int cc=0;
        int ans=0;
        for(int i=0;i<s.size();i++){

        
        
        
            if(s[i]=='(')oc++;
            else cc++;

           if(oc==cc){
            ans=max(ans,2*cc);
            // oc=0;
            // cc=0;
           }
            


            else if(cc>oc){
            oc=0;
            cc=0;
            }

               

           

        }
        oc=0,cc=0;

        for(int i=s.size()-1;i>=0;i--){

        
        
        
            if(s[i]=='(')oc++;
            else cc++;

           if(oc==cc){
            ans=max(ans,2*oc);
            // oc=0;
            // cc=0;
           }
            


            else if(oc>cc){
            oc=0;
            cc=0;
            }

               

           

        }
        
        return ans;

        
    }
};