#include <bits/stdc++.h>
 
 
using namespace std;

void actualizar(int arr[],int i, int val){

    arr[i]=val;
}

 
int main(){

  int arr[]={1,2,3,4,5};
  cout<<sizeof(arr)<<endl; //5x4 bytes 
  int n=sizeof(arr)/sizeof(int);
  cout<<n<<endl;
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        cout<<endl;

  actualizar(arr,1,13);

  for(int i=0;i<n;i++)cout<<arr[i]<<" ";
 cout<<endl;
 cout<<arr<<endl; //0x61fef0
 
    return 0;
}
