class Solution {
public:
    bool isPerfectSquare(long long num) {
        //Link: https://leetcode.com/problems/valid-perfect-square/description/
        long long  l=1;
        long long  r=num;
    

        while(l<=r){

            long long int mid=(l+r)/2;
            long long int x=mid*mid;
            

            if(x==num)return true;
            else if(x>num){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return false;
    }
};
