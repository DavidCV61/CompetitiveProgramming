#include<iostream>
using namespace std;

//Brute Force O(N)
void factorise(int n){

	for(int i=2; i<=n; i++){
		if(n%i == 0){
			int cnt = 0;
			while(n%i == 0){
				cnt++;
				n = n/i;
			}

			cout<<i<<"^"<<cnt<<",";
		}
	}
}


int main(){

	int n;
	cin>>n;

	factorise(n);

	return 0;
}
