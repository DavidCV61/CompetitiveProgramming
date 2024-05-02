//Link: https://leetcode.com/problems/decode-xored-permutation/description/
class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int n=encoded.size();
        vector <int> v(n+1);
        v[0]=1;
      
        for(int i=2;i<=n+1;i++) v[0]=(v[0]^i);
    

        for(int i=1;i<n;i=i+2) v[0]^=encoded[i];
        for(int i=1;i<=n;i++) v[i]=v[i-1]^encoded[i-1];

        return v; 


    }
};
