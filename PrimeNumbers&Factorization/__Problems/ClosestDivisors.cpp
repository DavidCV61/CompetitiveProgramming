class Solution {
public:
//Link: https://leetcode.com/problems/closest-divisors/description/
      vector<int> closestDivisors(int num) {

        int cmp=INT_MAX;
        vector <int> ans(2);
        
      for(int i=1;i*i<=(num+1);i++){

            if((num+1)%i==0){
                int aux=abs(((num+1)/i)-i);
            if(aux<cmp){
                ans[0]=(num+1)/i;
                ans[1]=i;
                cmp=aux;
            }
            }


      }

        for(int i=1;i*i<=(num+2);i++){

            if((num+2)%i==0){
                int aux=abs(((num+2)/i)-i);
            if(aux<cmp){
                ans[0]=(num+2)/i;
                ans[1]=i;
                cmp=aux;
            }
            }


      }

      return ans;



    }
};
