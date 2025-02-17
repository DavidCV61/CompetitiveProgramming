//Link:https://codeforces.com/contest/131/problem/C
#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long




void solve(){
	
	int n,m,t;
	cin>>n>>m>>t;
	ll N=max(n,m);

	vector< vector<unsigned long long> > v(N + 1, vector<unsigned long long>(N+1,0));

	v[0][0]=1;

	for(int i=1;i<=N;i++){
		

		for(int j=0;j<=i;j++){

			if(j==0) v[i][j]=1;
			else v[i][j]=v[i-1][j]+v[i-1][j-1];
		}


	}
	

/*	for(int i=0;i<=N;i++){

		for(int j=0;j<=N;j++) cout<<v[i][j]<<" ";
		cout<<endl;
	}*/

	unsigned long long ans=0;
	//cout<<v[20][16]<<endl;	

	
		for(int j=4;j<=t-1;j++){

			if(j<=n && t-j<=m)ans+=(v[n][j]*v[m][t-j]);
		}


	
	

	cout<<ans<<endl;


}

int main() {
    fast_io();
    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}


