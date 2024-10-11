class Solution {
public:
//Link: https://leetcode.com/problems/closest-divisors/description/
    vector<int> closestDivisors(int num) {

        int x=num+1;
        int y=num+2;
        int ansx=1;
        int ansy=1;

        for(int i=sqrt(x);i>1;i--){

            if(x%i==0){
                ansx=i;
                break;
            }
        }
         for(int i=sqrt(y);i>1;i--){

            if(y%i==0){
                ansy=i;
                break;
            }
        }


        int compx=abs((x/ansx)-ansx);

        int compy=abs((y/ansy)-ansy);
        cout<<compy<<" "<<compx<<endl;

        vector <int> v(2);

        if(compx>compy){

            v[0]=y/ansy;
            v[1]=ansy;
        }else{
             v[0]=x/ansx;
            v[1]=ansx;
        }


        return v;

        
    }
};
