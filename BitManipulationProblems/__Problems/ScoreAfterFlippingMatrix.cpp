//Link: https://leetcode.com/problems/score-after-flipping-matrix/description/

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
    int matrixScore(vector<vector<int>>& grid) {

        int n=grid.size();
        int m=grid[0].size();
        vector <int> v(n);

        for(int i=0;i<n;i++){
            int num=0;
            for(int j=0;j<m;j++){
                
                num+=grid[i][m-j-1]*pow(2,j);

            }
            v[i]=num;
        }
    int r=pow(2,m)-1;
        for(int i=0;i<n;i++)if((v[i]>>(m-1))==0) v[i]=r^v[i];
      
        
        for(int i=0;i<m;i++){
           int aux=0;
            for(int j=0;j<n;j++){
                if((v[j]>>i)&1==1) aux++;
                else aux--;
            }
            //cout<<aux<<endl;
            
            if(aux<0){
                for(int j=0;j<n;j++){

                    if(((v[j]>>i)&1)!=1)updateithbit(v[j],i,1);
                    else updateithbit(v[j],i,0);
                }
            }
            


        }
    int ans=0;;
for(int i=0;i<n;i++)ans+=v[i];
        return ans;


        
    }
};
