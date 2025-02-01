//Link: https://codeforces.com/problemset/problem/1459/C
#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

ll gcd(ll a,ll b){
	
	if(b==0) return a;
	return gcd(b,a%b);
}


void solve(){
	ll n,m;
	cin>>n>>m;
	vector <ll> a(n);
	vector <ll> b(m);

	for(ll i=0;i<n;i++)cin>>a[i];
	for(ll i=0;i<m;i++)cin>>b[i];
	
	if(n==1)for(ll i=0;i<m;i++)cout<<a[0]+b[i]<<" ";
	else{
		ll G;

		if(n==2) G=abs(a[1]-a[0]);
		else{
			G=abs(a[1]-a[0]);
			for(ll i=2;i<n;i++){
			G=gcd(G,abs(a[i]-a[0]));
		}
		}
		

		for(ll i=0;i<m;i++)cout<<gcd(G,a[0]+b[i])<<" ";
		
	}


}

int main() {
    fast_io();
    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}


