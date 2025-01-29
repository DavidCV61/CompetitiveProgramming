//Link: https://codeforces.com/problemset/problem/992/B
#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

ll gcd(ll a,ll b){
	
	if(b==0) return a;
	return gcd(b,a%b);
}



void solve(){
	
	ll l,r,x,y;
	cin>>l>>r>>x>>y;
	ll m=y/x;
	ll ans=0;
	for(ll i=1;i*i<=m;i++){

		if(m%i==0){
			ll n=m/i;
			ll aux=gcd(i*x,n*x);
			if(aux==x && (i*x*n*x)/aux==y){
				
				if(l<=i*x && n*x<=r){
					//cout<<i*x<<" "<<n*x<<endl;
					ans++;
					if(i!=n)ans++;
				}

			}
		}
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


