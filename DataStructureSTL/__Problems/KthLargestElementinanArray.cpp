//Link: https://leetcode.com/problems/kth-largest-element-in-an-array/description/

//Nota: Se puede resolver con QuickSelect (Variacion de quick sort) para optimizar O(N)
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        
        return nums[nums.size()-k];

    }
};
