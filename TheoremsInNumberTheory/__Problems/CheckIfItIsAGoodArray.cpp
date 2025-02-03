//Link: https://leetcode.com/problems/check-if-it-is-a-good-array/description/
class Solution {
public:

    int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b, a%b);
    }
    bool isGoodArray(vector<int>& nums) {

        int n=nums.size();
        int G=nums[0];

        for(int i=1;i<n;i++) G=gcd(G,nums[i]);
        
        if(G==1) return true;
        else return false;
        
    }
};
