//Link: https://leetcode.com/problems/find-k-closest-elements/description/
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int,int>> v(arr.size());
        for(int i=0;i<arr.size();i++){
            v[i].first=abs(arr[i]-x);
            v[i].second=arr[i];
        }

        sort(v.begin(),v.end());
        vector<int> ans(k);

        for(int i=0;i<k;i++)ans[i]=v[i].second;

        sort(ans.begin(),ans.end());

        return ans;
    }
};
