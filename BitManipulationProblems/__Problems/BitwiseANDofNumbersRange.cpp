//Link: https://leetcode.com/problems/bitwise-and-of-numbers-range/description/
class Solution {
public:
    void clearBith(int &n,int i){
     int mask=~(1<<i);
    n=(n&mask);

}

void updateithbit(int &n,int i,int v){

    clearBith(n,i);
    int mask=(v<<i);
    n=n|mask;

}
    int rangeBitwiseAnd(int left, int right) {
        int  ans=0;
        int dist=right-left;
       
        for(int i=0;i<32;i++){

                long long x=pow(2,i);
                if(dist<=x){
                    
                    
                    if(((((left>>i))&1)==1) && ((((right>>i))&1)==1)) updateithbit(ans,i,1);
                    
                }
        }

        return ans;






        
