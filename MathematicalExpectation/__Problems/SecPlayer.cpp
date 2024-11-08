// Link: https://www.codechef.com/problems/SECPLAYER
#include <bits/stdc++.h>
 

#define ll long long 
const ll mod =1e9+7;


using namespace std;



ll expo (ll a, ll b){
    
    
    ll ans=1;
    while(b){
        
        if(b&1){
            ans*=a;
            ans%=mod;
            }
            
            a*=a;
            a%=mod;
            b/=2;
        }
        
        
        
        return ans%mod;
    
    
    
    }
    
    
    
ll solve(vector<ll> a, ll n){
    
    
    vector <ll> v(n+5);
    v[0]=0;
    v[1]=0;
    v[2]=a[1];
    
    for(ll i=3;i<=n;i++){
        
        ll aux=(i*(i-1))/2;
        aux%=mod;
 
        ll dem=expo(aux,mod-2)%mod;
        ll num=a[i-1]%mod;
        ll termino1=(num*dem)%mod;
        ll termino2=((aux-1)*dem)%mod;
        
        termino2*=v[i-1];
        termino2%=mod;
        
        //cout<<"("<<a[i-2]<<"/"<<aux<<")"<<endl; 
        
        v[i]=(termino1+termino2)%mod;
        
        
        
           
    }
    
    
    return (v[n]%mod);
    
    
    

    
    
    
    
}




int main()
{   

     int t;
     cin>>t;
     while(t--){
         
         ll n;
         cin>>n;
         vector<ll> a(n);
         for(ll i=0;i<n;i++)cin>>a[i];
         
         sort(a.rbegin(), a.rend());
         ll ans=solve(a,n)%mod;
         cout<<ans<<endl;
         
         
         
         
         
         
         
     }
}
