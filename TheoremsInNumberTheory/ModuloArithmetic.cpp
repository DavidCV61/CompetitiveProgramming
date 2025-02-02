#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

const ll P=7, N=1e5;

ll fact[N];

ll sumaMOD(ll a, ll b){

	return (a+b)%P;
}

ll restaMOD(ll a, ll b){

	return ((a-b)%P+P)%P;
}

ll multiMOD(ll a,ll b){
	return (a*b)%P;
}

void calcular_factoriales(){
	fact[0]=1;

	for(ll i=1;i<N;i++){
		fact[i]=multiMOD(fact[i-1],i);
	}
}





ll powr(int x,int y){

	ll res=1;
	while(y){
		if(1&y)res=multiMOD(res,x);
		y/=2;
		x=multiMOD(x,x);
	}

	return res;
}


ll inv(ll x){
	return powr(x,P-2);
}

ll divMOD(ll a,ll b){

	return multiMOD(a,inv(b));
}

ll nCr(ll n, ll r){


	return multiMOD(multiMOD(fact[n],inv(fact[r])),inv(fact[n-r]));

}
void solve(){
	

	cout<<sumaMOD(3,5)<<endl;
	cout<<restaMOD(3,5)<<endl;
	cout<<multiMOD(243,234)<<endl;
	cout<<divMOD(56,2)<<endl;
	calcular_factoriales();
	cout<<fact[5]<<endl;
	cout<<nCr(5,2)<<endl;


}

int main() {
    fast_io();
    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}


