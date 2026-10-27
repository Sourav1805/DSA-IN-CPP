class Solution {
public:
long long MOD=1e9+7;
    long long pow(int x, long long n){
         if(n==0)return 1;
       long long ans=pow(x,n/2);
        
        return n%2==0?(ans*ans)%MOD:((ans*ans)%MOD *x)%MOD;

    }
    int countGoodNumbers(long long n) {
        int ans=(pow(5,(n+1)/2)*pow(4,n/2))%MOD;

        return ans;
    }
};