#include <bits/stdc++.h>
 
 
using namespace std;

void actualizar(array<int,6> &arr,int i, int val){

    arr[i]=val;
}

 
int main(){

  array <int,6> arr={1,2,3,4,5,6};
  arr[0]=10;

  for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
cout<<endl;

actualizar(arr,2,100);

  for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
cout<<endl;
sort(arr.begin(),arr.end());


for(int x:arr){

    cout<<x<<endl;
}
 
    return 0;
}
