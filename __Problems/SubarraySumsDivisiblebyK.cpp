class Solution {
public:
    

//https://leetcode.com/problems/subarray-sums-divisible-by-k/description/

int subarraysDivByK(vector<int>& nums, int k) {

	
	int n=nums.size();
	vector<int> v(n+1);
	v[0]=0;
	int ans=0;

	for(int i=0;i<n;i++)v[i+1]=v[i]+nums[i];

	unordered_map<int,int> m;

	for (int i = 0; i < n+1; ++i){

		int md=v[i]%k;

		if(md<0) v[i]=k+md;
		else v[i]=md;
		m[v[i]]++;
	}

	


	for(int i=0;i<n+1;i++){
		m[v[i]]--;
		ans+=m[v[i]];
	}

	return ans;
	

	

    }

};
