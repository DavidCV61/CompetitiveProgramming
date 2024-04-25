//Link: https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/description/
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
typedef pair<int, int> pi;
    vector<int> sortByBits(vector<int>& arr) {
        vector <int> v;
    priority_queue<pi, vector<pi>, greater<pi> > pq;



    for(int i=0;i<arr.size();i++){
    	int x=count_bits_hack(arr[i]);

    	pq.push(make_pair(x, arr[i]));
    
 }
  
 
    
    while (!pq.empty()) {
       pair<int, int> top = pq.top();
    v.push_back(top.second);
        pq.pop();
    }

    return v;
    }
};
