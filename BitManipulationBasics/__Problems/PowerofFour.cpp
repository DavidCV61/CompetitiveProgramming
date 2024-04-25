//Link: https://leetcode.com/problems/power-of-four/description/
class Solution {
public:
    bool isPowerOfFour(long long n) {

        if(n==0) return false;
        if((n&(n-1))==0 && (n-1)%3==0){
           return true;
           
        }else return false;
    }
};
