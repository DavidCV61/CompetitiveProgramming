//Link: https://codeforces.com/contest/1312/problem/D
#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
const int MOD = 998244353;

vector<ll> fact(200005), inv_fact(200005);

ll power(ll base, ll exp) {
    ll result = 1;
    base = base % MOD;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
        exp = exp >> 1;
        base = (base * base) % MOD;
    }
    return result;
}

ll modInverse(ll a) {
    return power(a, MOD - 2);
}


void solve() {
    ll n, m;
    cin >> n >>m;

    if(n==2){

	    cout<<"0"<<endl;
	    return;
    }

    fact[0] = 1;
    inv_fact[0] = 1;
    ll p=max(m,n)+2;

    for (ll i = 1; i <= p; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
        inv_fact[i] = modInverse(fact[i]);
    }

    ll ans = 0;
    ll k=n-1;
    ll tp=n-3;
	
   ll comb=(fact[m]*inv_fact[k])%MOD;
	comb=(comb*inv_fact[m-k])%MOD;
	ll sum=0;


    for (int i = 0; i <= tp; i++) {
		
	    ll aux=(fact[tp]*inv_fact[i])%MOD;
	    aux=(aux*inv_fact[tp-i])%MOD;
	    sum+=(aux);
	    sum%=MOD;
	   


           }

    ans=(comb*sum)%MOD;
    ans=(ans*(n-2))%MOD;

    cout<<ans<<endl;


}

int main() {
    fast_io();
    int t = 1;
    while (t--) solve();
    return 0;
}
