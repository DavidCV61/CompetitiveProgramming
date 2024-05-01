//Link: https://leetcode.com/problems/total-hamming-distance/submissions/1246102836/
class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n=nums.size();
        int ans=0;

        for(int i=0;i<32 ;i++){
            int ct1=0;
            int ct0=0;
            for(int j=0;j<n;j++){
                if(((nums[j]>>i)&1)==1) ct1++;
                else ct0++;

            }
            ans+=ct1*ct0;
            cout<<ans<<endl;
        }
        return ans;
    }
};
