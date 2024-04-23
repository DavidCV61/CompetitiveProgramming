
//Link: https://leetcode.com/problems/distribute-candies/description/
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        unordered_set <int> s;

        int aux=0;
        int n=candyType.size();

        for(int i=0;i<n;i++){
             auto it = s.find(candyType[i]);

             if(it == s.end()) aux++;
             s.insert(candyType[i]);

        }

        if(aux>=n/2) return n/2;
        else return aux;



        
    }
};
