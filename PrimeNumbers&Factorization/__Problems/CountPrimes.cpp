class Solution {
public:

//Link: https://leetcode.com/problems/count-primes/
    int countPrimes(int n) {
        if(n <= 2){
            return 0;
        }

        vector<int> dp(n + 1, true);
        int count = n - 2;
        for(int i = 2; i <= sqrt(n); i++){
            if(dp[i]) {
                for(int j = (i * i); j < n; j += i){
                    if(dp[j]){
                        dp[j] = false;
                        count--;
                    }
                }
            }
        }
        return count;
    }
};
