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

void clearBith(int &n,int i){
     int mask=~(1<<i);
    n=(n&mask);

}

void updateithbit(int &n,int i,int v){

    clearBith(n,i);
    int mask=(v<<i);
    n=n|mask;

}

void clearlastibits(int &n,int i){
    int mask=(-1<<i);
    n=(n&mask);
}

int main(){
int n=15;
int i;
cin>>i;

//cout<<getithbit(n,i);
//setithbit(n,i);
//clearBith(n,i);
//updateithbit(n,i,1);
clearlastibits(n,i);
cout<<n<<endl;
      

    return 0;
}
