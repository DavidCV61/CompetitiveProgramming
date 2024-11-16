#include <bits/stdc++.h>
//Link: https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/lola-and-candies-36b57b1b/

using namespace std;


int main(){

    int n;
    cin>>n;

    int ans=0;
    for(int i=1;i*i<=n;i++){
       

        if(n%i==0){


            int aux=(n/i)-i;
            

            if(aux>=0 && aux%2==0) ans++;
           
        }
    }

    cout<<ans<<endl;


  
   


    return 0;
}
