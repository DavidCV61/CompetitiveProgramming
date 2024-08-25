#include <bits/stdc++.h>
#define ll long long
const ll mod = 1e9+7;


using namespace std;


ll expo(ll a, ll b){

	ll ans=1;

	while(b){

		if(b&1==1){

			ans=ans*a;
		}

		a=a*a;

		b/=2;
	}

	return ans;


}

ll expomod(ll a, ll b){

	ll ans=1;

	while(b){

		if(b&1==1){

			ans=(ans*a)%mod;
		}

		a=(a*a)%mod;

		b/=2;
	}

	return ans;


}

ll binpow(ll a,ll b){
 
	if(b==0) return 1;
	if(b%2==0){
		ll n=binpow(a,b/2)%mod;
		return (n*n)%mod;
	}
	return binpow(a,b-1)*a%mod;
}
 




int main(){

	ll a,b;
	cin>>a>>b;
	cout<<binpow(a,b)<<endl;




	




	return 0;

}


