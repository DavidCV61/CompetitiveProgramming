//Link: https://www.hackerearth.com/problem/algorithm/prime-sum-7-a85eba53/
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
 
 
int main(){
 
    ll n;
    cin>>n;
 
    vector <ll> primos(n+2,0);
 
 
    primos[0]=1;
    primos[1]=1;
    primos[2]=0;
 
 
    for(ll i=2;i<=n;i++){
 
        if(primos[i]==0){
            for(ll j=i*i;j<=n;j=j+i){
            primos[j]=1;
        }
        }
 
        
    }
 
    unordered_set<ll> s;
    vector <ll> a;
 
 
 
    for(ll i=0;i<=n;i++){
        if(primos[i]==0){
            s.insert(i);
            a.push_back(i);
        }
    }
 
    if(n==1 || n==2 || n==3) cout<<"0"<<endl;
    else{
 
        ll ans=0;
        for(ll i=1;i<a.size();i++){
 
 
            if(a[i]+2<=n && s.find(a[i]+2) != s.end()) ans++;
 
        }
 
        cout<<ans<<endl;
    }
 
 
 
 
 
 
 
    
 
  
   
 
 
    return 0;
}
