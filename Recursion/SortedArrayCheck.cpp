#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long


bool check(vector <int> v, int i){


	if(i==0) return true;
	else if(v[i]>v[i-1]) return check(v,i-1);
	else return false;

	
}



void solve() {


	vector <int> v={2,1};
	int n=v.size();
	if(check(v,n-1))cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
   
	
}

int main() {
    fast_io();
    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}
