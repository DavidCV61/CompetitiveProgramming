class Solution {
public:
//Link: https://leetcode.com/problems/perfect-squares/
int sol(int n,vector<int>&memo){
    if(n<=0) return 0;
      if(memo[n]!=-1) return memo[n];

        int x=1;
        int pos=1;
        int ans=INT_MAX;
        while(x<=n){
            ans=min(ans,sol(n-x,memo));
            pos++;
            x=pos*pos;
        }
    return memo[n]=(ans+1);
}

    int numSquares(int n) {
      vector<int> memo(n+2,-1);
    return sol(n,memo);
      
    }
};
