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

void clearBitsRange(int &n,int i,int j){
    int a=(~0)<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    n=(n&mask);
}
int main(){
int n=31;
int i=1;
int j=3;

//cout<<getithbit(n,i);
//setithbit(n,i);
//clearBith(n,i);
//updateithbit(n,i,1);
//clearlastibits(n,i);
clearBitsRange(n,i,j);
cout<<n<<endl;
      

    return 0;
}
