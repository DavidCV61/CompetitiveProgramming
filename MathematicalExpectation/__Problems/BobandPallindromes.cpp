//Link: https://www.codechef.com/problems/PALLIND?tab=statement

#include <bits/stdc++.h>
#define ll long long
const long long mod= 1000000007;
using namespace std;


ll expo(ll a,ll b){
	ll ans=1;


	while(b){

		if(b&1) {
			ans*=a;
			ans%=mod;
		}
		a*=a;
		a%=mod;
		b/=2;

	}

	return ans;
	}








int main(){

	
	ll t;
	cin>>t;
	
	while(t--){
		ll n;
		cin>>n;
		ll m=n/2;
		ll ans=1;
		ll r=expo(26,mod-2)%mod;
		ll a=r;

		if(m>0){
			

			if(n%2==1){

				ll num=(expo(r,m)%mod-1)%mod;
				num*=a;
				num%=mod;
				ll aux=(r-1)%mod;
				ll dem=expo(aux,mod-2)%mod;
				ans +=(2*((num*dem)%mod))%mod;




			}else{

				if(m==1){
					ans+=r;
					ans%=mod;
				}else{

				ll num=(expo(r,m-1)%mod-1)%mod;
				num*=a;
				num%=mod;
				ll aux=(r-1)%mod;
				ll dem=expo(aux,mod-2)%mod;
				ans +=(2*((num*dem)%mod))%mod;
				ll suma=expo(r,m)%mod;
				ans+=suma;
				ans%=mod;
				}
				
			}

		}

		cout<<ans<<endl;

		
		

	
		


		




	}








	return 0;
}
