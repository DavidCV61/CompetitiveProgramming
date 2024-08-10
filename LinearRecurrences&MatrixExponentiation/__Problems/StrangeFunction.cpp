#include <bits/stdc++.h>

 //Link: https://www.codechef.com/problems/ABX01?tab=statement
 
using namespace std;


long long modular9(long long n){
	long long m=n%9;

	if(m==0) return 9;
	else return m;
}
 
long long binpow(long long a,long long n){
 
	if(n==0) return 1;
	if(n%2==0){
		long long b=modular9(binpow(a,n/2));
		return modular9(b*b);
	}
	return modular9(binpow(a,n-1)*a);
}
 

 
 
 
int main(){
 
	int t;
	cin>>t;

 	
 	while(t--){

 		long long n,a;

 		cin>>a>>n;

 		


 		cout<<modular9(binpow(a,n))<<endl;








 	}
 
 
 
	return 0;
} 
