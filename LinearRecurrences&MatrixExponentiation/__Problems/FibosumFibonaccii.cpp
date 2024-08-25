#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9 + 7;
const ll sz = 2;

struct Mat {
	ll m[sz][sz];
	Mat() {
		memset(m, 0, sizeof(m));
	}
	void identity() {
		for (ll i = 0; i < sz; i++) {
			m[i][i] = 1;
		}
	}
	Mat operator* (Mat a) {
		Mat res;
		for (ll i = 0; i < sz; i++) {
			for (ll j = 0; j < sz; j++) {
				for (ll k = 0; k < sz; k++) {
					res.m[i][j] += m[i][k] * a.m[k][j];
					res.m[i][j] %= mod;
				}
			}
		}
		return res;
	}
};

ll Fib(ll n) {
	if (n == 0) return 0;
	Mat res;
	res.identity();
	Mat T;
	T.m[0][0] = T.m[0][1] = T.m[1][0] = 1;

	if (n <= 2) return 1;
	n -= 2;

	// log(n)
	while (n) {
		if (n & 1) res = res * T;
		T = T * T;
		n /= 2;
	}

	return (res.m[0][0] + res.m[0][1]) % mod;
}

int main()
{
	

	ll t;
	cin >> t;

	while (t--) {
		ll n, m;
		cin >> n >> m;
		cout << (Fib(m + 2) - Fib(n + 1) + mod) % mod << '\n';
	}

	return 0;
}
