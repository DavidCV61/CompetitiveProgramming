class Solution {
public:

    //LInk: https://leetcode.com/problems/maximum-product-subarray/description/
    int maxProduct(vector<int>& nums) {

        int ans=nums[0];
        int n=nums.size();
        vector<pair<int,int>> v(n+2);
       if(ans<=0){
            v[0].first=1;
            v[0].second=ans;
       }else{
            v[0].first=ans;
            v[0].second=1;
       }
        for(int i=1;i<n;i++){

            v[i].first=max(v[i-1].second*nums[i],max(nums[i],v[i-1].first*nums[i]));
            v[i].second=min(v[i-1].second*nums[i],min(nums[i],v[i-1].first*nums[i]));
            cout<<v[i].first<<" "<<v[i].second<<endl;

            ans=max(ans,v[i].first);
        }

        return ans;

        
    }
};
