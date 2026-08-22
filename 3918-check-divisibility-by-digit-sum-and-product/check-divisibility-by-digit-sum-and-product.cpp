class Solution {
public:
    int sumdigit(int n){
        int ans=0;
        while(n>0){
            ans+=(n%10);
            n/=10;
        }
        return ans;

    }
    int proddigit(int n){
        int ans=1;
        while(n>0){
        ans*=(n%10);
        n/=10;
        }
        return ans;
    }
    bool checkDivisibility(int n) {
        int sum=sumdigit(n);
        int prod=proddigit(n);
        if((n%(sum+prod))==0)return true;
        return false;
    }
};