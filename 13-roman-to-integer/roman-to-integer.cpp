class Solution {
public:
    int integer(char s){
        if(s=='I')return 1;
        else if(s=='V')return 5;
        else if(s=='X')return 10;
        else if(s=='L')return 50;
        else if(s=='C')return 100;
        else if(s=='D')return 500;
        else return 1000;
        
    }
    int romanToInt(string s) {
        int ans=0;
        int i=0;
        for(i=0;i< (s.size()-1);i++){
            if(integer(s[i])<integer(s[i+1]))ans-=integer(s[i]);
            else ans+=integer(s[i]);
            
        }
        ans+=integer(s[i]);
        
        return ans;
    }
};