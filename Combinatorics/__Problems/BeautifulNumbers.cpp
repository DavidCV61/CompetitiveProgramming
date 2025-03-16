//Link: https://codeforces.com/contest/300/problem/C
#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
const int MOD = 1e9 + 7;

vector<ll> fact(1000005), inv_fact(1000005);

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

bool perfectNumber(ll k, ll a, ll b) {
    while (k != 0) {
        ll aux = k % 10;
        k /= 10;
        if (aux != a && aux != b) return false;
    }
    return true;
}

void solve() {
    ll n, a, b;
    cin >> a >> b >> n;

    fact[0] = 1;
    inv_fact[0] = 1;

    for (ll i = 1; i <= n; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
        inv_fact[i] = modInverse(fact[i]);
    }

    ll ans = 0;

    for (int i = 0; i <= n; i++) {
        ll k = (a * i) + (b * (n - i));
        if (perfectNumber(k, a, b)) {
            ll C = (fact[n] * inv_fact[i] % MOD) * inv_fact[n - i] % MOD;
            ans = (ans + C) % MOD;
        }
    }

    cout << ans << endl;
}

int main() {
    fast_io();
    int t = 1;
    while (t--) solve();
    return 0;
}
