#include <bits/stdc++.h>

 //Problem: https://www.spoj.com/problems/LOCKER/https://www.spoj.com/problems/LOCKER/
 
using namespace std;
 
 
long long mod = 1e9 + 7;
 

 
 
// long long modularexpo(long long a,long long b){
// 	long long res = 1;
// 	while (b) {
// 		if (b & 1) res *= a, res %= mod;
// 		a *= a; a %= mod;
// 		b /= 2;
// 	}
// 	return res%mod;
 
 
 
// }

long long binpow(long long a,long long n){
 
	if(n==0) return 1;
	if(n%2==0){
		long long b=binpow(a,n/2)%mod;
		return b*b%mod;
	}
	return binpow(a,n-1)*a%mod;
}
 

 
 
 
int32_t main(){
 
	int t;
	cin>>t;
 
 
	while(t--){
 
		long long n;
		cin>>n;
		long long m;
 
		if(n==1)cout<<"1"<<endl;
		else if(n==2)cout<<"2"<<endl;
		else if(n%3==0){
 
			m=n/3;
			cout<<binpow(3,m)<<endl;
 
		}else if(n%3==1){
 
			m=(n-4)/3;
			cout<<(4*binpow(3,m))%mod<<endl;
 
 
		}else{
 
			m=(n-2)/3;
			cout<<(2*binpow(3,m))%mod<<endl;
 
 
		}
	}
	
 
 
 
 
 
 
 
 
	return 0;
} 
