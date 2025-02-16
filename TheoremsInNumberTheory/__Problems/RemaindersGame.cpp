//Link:https://codeforces.com/contest/687/problem/B
#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

ll gcd(ll a,ll b){
	
	if(b==0) return a;
	return gcd(b,a%b);
}

ll lcm(ll a, ll b){


	return (a*b)/gcd(a,b);
}


void solve(){
	
	ll n,k;
	cin>>n>>k;
	vector <ll> v(n);

	for(int i=0;i<n;i++)cin>>v[i];

	ll L=v[0];

	for(int i=1;i<n;i++){
		
		L=gcd(lcm(L,v[i]),k);
	}

	

	if(L%k==0) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;

}

int main() {
    fast_io();
    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}


