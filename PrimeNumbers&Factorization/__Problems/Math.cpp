#include <bits/stdc++.h>
#define ll long long

using namespace std;

//Link:https://codeforces.com/problemset/problem/1062/B



int main(){

	ll n;
	cin>>n;

	vector <ll> criba(n+2,0);
	criba [0]=1;
	criba[1]=1;

	for(ll i=2;i<=n;i++){

		if(criba[i]==0){

			criba[i]=i;

			for(ll j=i*i;j<=n;j=i+j){

				criba[j]=i;
			}
		}

	}

	ll m=n;
	unordered_map<ll,ll> mapa;



	while(criba[m]!=m){
		//cout<<m<<endl;
		mapa[criba[m]]++;
		m=m/criba[m];

	}

mapa[criba[m]]++;
ll ans1=1;
ll aux=-1;


    for (const auto& pair : mapa) {

    	ans1*=pair.first;
    	aux=max(aux,pair.second);
     // cout <<  pair.first << " ^ " << pair.second << '\n';
    }
  //  cout<<ans1<<" "<<aux<<endl;

    ll cmp=1;
    ll ct=0;

    while(cmp<aux){

    	ct++;
    	cmp*=2;
    }
    bool flag=true;

     for (const auto& pair : mapa) {

    	if(pair.second!=cmp){
    		flag=false;
    		break;
    	}
    }
   // cout<<ct<<endl;

    ll ans2=ct;

    if(!flag) ans2++;

    cout<<ans1<<" "<<ans2<<endl;
	
	
	return 0;
}
