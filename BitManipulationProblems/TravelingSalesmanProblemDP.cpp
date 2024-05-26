#include <bits/stdc++.h>

using namespace std;


int tsp(vector<vector<int>> dist, int setofcities, int pos, int n,vector<vector<int>> &dp){

    if(setofcities==(1<<n)-1){
        return dist[pos][0];
    }

    if(dp[setofcities][pos]!=-1){
        return dp[setofcities][pos];
    }

    int ans=INT_MAX;

    for(int choice=0;choice<n;choice++){

        if((setofcities & (1<<choice))==0){
            int subprob=dist[pos][choice]+tsp(dist,setofcities|(1<<choice),choice,n,dp);
            ans=min(ans,subprob);

        }

    }

    return dp[setofcities][pos]=ans;

}



int main() {

vector<vector<int>> dist={


    {0,20,42,25},
    {20,0,30,34},
    {42,30,0,10},
    {25,34,10,0}
};
int n=4;
vector<vector<int>> dp(1<<n,vector<int> (n,-1));
cout<<tsp(dist,1,0,n,dp);

return 0;

}
