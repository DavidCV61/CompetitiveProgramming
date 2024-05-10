#include <bits/stdc++.h>
 
 //Link: https://atcoder.jp/contests/abc205/tasks/abc205_c
using namespace std;


int main(){
	int a,b,c;
	cin>>a>>b>>c;

		string ch;




if(c%2==0){
			if(abs(a)>abs(b)) ch=">";
		else if(abs(b)>abs(a)) ch="<";
		else ch="=";

		}else{
			if(a>b) ch=">";
		else if(b>a) ch="<";
		else ch="=";


		}

		cout<<ch<<endl;

	return 0;

}
