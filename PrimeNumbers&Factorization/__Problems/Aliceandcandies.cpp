#include <bits/stdc++.h>
//Link: https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/lola-and-candies-36b57b1b/

using namespace std;


int main(){


	int n;
	cin>>n;
	int ans=0;
	for(int i=2;i*i<=n;i++){

		if(n%i==0 && (n/i-i)%2==0)ans++;
	}

	if(n%2==1)cout<<ans+1<<endl;
	else cout<<ans<<endl;
	
	return 0;
}
