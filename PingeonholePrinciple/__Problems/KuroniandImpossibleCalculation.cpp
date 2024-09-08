#include<bits/stdc++.h>
#define ll long long 
using namespace std;


//Link: https://codeforces.com/problemset/problem/1305/C
int main()
{

	ll n,m;
	cin>>n>>m;

	vector<int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
		

	ll aux=n*(n-1)/2;






	if(aux>(m-1)*(m-1))cout<<"0"<<endl;
	else{
		
		ll ans=1;


		for(ll i=0;i<n;i++){

			for(ll j=i+1;j<n;j++){

				

				ans*=abs(a[j]-a[i]);
				ans%=m;

				


			}
		}

		cout<<ans<<endl;
	}










		




	return 0;
}
