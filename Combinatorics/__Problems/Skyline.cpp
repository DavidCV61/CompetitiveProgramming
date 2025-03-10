//Link: https://www.spoj.com/problems/SKYLINE/
#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
const ll N=1007;
const ll mod=1000000;
vector<vector<ll>> ans(N, vector<ll>(N, 0));



void skyline(vector<vector<ll>> &ans){


	ans[3][1]=1;
	ans[3][2]=2;
	ans[3][3]=2;
	


	for(int i=4;i<N;i++){
		ll suma=0;

		for(int j=1;j<=i;j++){
			
			suma+=ans[i-1][j]%mod;
			suma%=mod;

			if(j==i){
				ans[i][j]=ans[i][j-1]%mod;
			}else{

				ans[i][j]=suma%mod;
			}

		}
	}

	return;
}



void solve(){
		

	while(true){

		ll n;
		cin>>n;
		if(n==0) break;

		ll out=0;
		for(int i=1;i<=n;i++){

			out+=ans[n][i];
			out%=mod;
		}

		cout<<out%mod<<endl;
	}


		
	





    
    

}

int main() {
    fast_io();
    skyline(ans);
    //cout<<ans[5][1]<<endl;
    //cout<<ans[5][2]<<endl;
    //cout<<ans[5][3]<<endl;
    //cout<<ans[5][4]<<endl;
    //cout<<ans[5][5]<<endl;

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}
