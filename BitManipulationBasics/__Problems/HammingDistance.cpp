//Link: https://leetcode.com/problems/hamming-distance/
class Solution {
public:
int count_bits_hack(int n){

	int ans = 0;
	while(n>0){
		//removes the last set bit from the current number
		n = n & (n-1);
		ans++;
	}

	return ans;

}

    int hammingDistance(int x, int y) {
        	
	return count_bits_hack(x^y);
    }
};
