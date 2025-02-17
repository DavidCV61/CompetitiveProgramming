//Link: https://codeforces.com/contest/630/problem/F
#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long




void solve(){
	
	ll n;
	cin>>n;
	vector< vector<ll> > v(n + 1, vector<ll>(n+1,0));

	v[0][0]=1;

	for(int i=1;i<=n;i++){
		

		for(int j=0;j<=i;j++){

			if(j==0) v[i][j]=1;
			else v[i][j]=v[i-1][j]+v[i-1][j-1];
		}


	}
	
/*	for(int i=0;i<=n;i++){

		for(int j=0;j<=n;j++) cout<<v[i][j]<<" ";
		cout<<endl;
	}

*/
	ll ans=v[n][5]+v[n][6]+v[n][7];

	cout<<ans<<endl;


}

int main() {
    fast_io();
    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}


