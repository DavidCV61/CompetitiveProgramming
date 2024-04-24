#include<bits/stdc++.h>

using namespace std;

int getithbit (int n, int i){
    int mask=(1<<i);
    return (n&mask)>0?1:0;

}

void setithbit(int &n, int i){
    int mask=(1<<i);
    n=(n|mask);

}

int main(){
int n=5;
int i;
cin>>i;

//cout<<getithbit(n,i);
setithbit(n,i);
cout<<n<<endl;
      

    return 0;
}
