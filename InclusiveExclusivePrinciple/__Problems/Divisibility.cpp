
// Link: https://basecamp.eolymp.com/en/problems/1534
#include <iostream>
#include <vector>

#define ll long long 


ll ans=0;


using namespace std;
ll gcd(ll a, ll b){

    return b == 0 ? a : gcd(b, a % b); 



}


ll lcm(ll a,ll b){
    
    return (a*b)/gcd(a,b);
    
    
}






int main()
{   

    
    ll l,r,n;
    

    while(cin>>l>>r>>n){
        
    vector <ll> a(n);
    ll ans=0;
    
    for(int i=0;i<n;i++) cin>>a[i];
    
    
    
    
    for(int i=1;i<(1<<n);i++){
        
        ll ct=0;
        ll aux=1;
        
     for(int j=0;j<n;j++){
         
         if((i>>j)&1){
            ct++;
            aux=lcm(a[j],aux); 
         //  cout<<a[j]<<" ";
     
   
               
         }
         
         
         
         }
         
         
    
        ll suma=(r/aux)-((l-1)/aux);
        
   //     cout<<" | "<<suma<<endl;
   
         
         if(ct%2) ans+=suma;
         else ans-=suma;
         
        
        }
         
    
    
    cout<<ans<<endl;
    }
    
     
    return 0;
}
