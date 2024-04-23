//Link: https://leetcode.com/problems/maximum-score-from-removing-stones/description/
class Solution {
public:
    int maximumScore(int a, int b, int c) {
        vector<int> v={a,b,c};

        sort(v.begin(),v.end());

       int aux=v[0]+v[1];
       if(aux<=v[2]) return aux;
       else{

        return v[2]+(aux-v[2])/2;
       }



    }
};
