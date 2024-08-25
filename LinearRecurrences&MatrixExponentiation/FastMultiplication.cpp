#include <bits/stdc++.h>
#define ll long long
const ll mod = 1e9+7;


using namespace std;

ll fastmult( ll a, ll b){

	ll ans=0;

	while(b){

		if(b&1==1){

			ans=(ans+a)%mod;
		}

		a=(a+a)%mod;

		b/=2;
	}

	return ans;


}



ll multbin(ll a,ll b){
 
	if(b==0) return 0;
	if(b%2==0){
		ll n=multbin(a,b/2)%mod;
		return (n+n)%mod;
	}
	return (multbin(a,b-1)+a)%mod;
}
 




int main(){

	ll a,b;
	cin>>a>>b;
	cout<<multbin(a,b)<<endl;




	




	return 0;

}


