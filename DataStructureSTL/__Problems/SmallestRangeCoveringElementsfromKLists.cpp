//Link: https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/description/
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
        int n=nums.size();

        vector <queue<int>> v(n);
        

        for(int i=0;i<n;i++){
            
            for(int j=1;j<nums[i].size();j++){
                v[i].push(nums[i][j]);
            }
        }

       priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>> > pq;
        pq.push({nums[0][0],0});
        int maxi= nums[0][0];   
        for(int i=1;i<n;i++) {
            pq.push({nums[i][0],i});
            maxi=max(maxi,nums[i][0]);
        }
        
          vector <int> ans={pq.top().first,maxi};
          int dist=maxi-pq.top().first;
         

          while(1){
            
            cout<<maxi<<endl;
            
            if(v[pq.top().second].empty()==true) return ans;
            else{
                cout<<v[pq.top().second].front()<<" "<<pq.top().second<<endl;
                
                pq.push({v[pq.top().second].front(),pq.top().second});
               
                if(v[pq.top().second].front()>maxi) maxi=v[pq.top().second].front();
                 v[pq.top().second].pop();
                 pq.pop();
               
              
              
               if(maxi-pq.top().first<dist){
                dist=maxi-pq.top().first;
                ans={pq.top().first,maxi};
               }
                
            }
            
          }

       
        

      
        
        

    return ans;
    }
  
};
