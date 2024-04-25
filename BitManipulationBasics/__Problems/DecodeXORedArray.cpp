//Link: https://leetcode.com/problems/decode-xored-array/  
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
       int n=encoded.size();
        vector <int> ans(n+1);
        ans[0]=first;
        for(int i=0;i<n;i++)ans[i+1]=ans[i]^encoded[i];

        return ans; 
    }
};
