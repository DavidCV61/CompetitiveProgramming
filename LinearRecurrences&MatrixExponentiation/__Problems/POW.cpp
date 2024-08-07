#include <bits/stdc++.h>


using namespace std;

void masmenos(int a, int b){


	if(a==b)cout<<"="<<endl;
	else if(a>b) cout<<">"<<endl;
	else cout<<"<"<<endl;
}

int main(){
	int a,b,c;

	cin>>a>>b>>c;

	if(a==b || c==0)cout<<"="<<endl;
	else{
		if(c%2==0){
		a=abs(a);
		b=abs(b);


	}

	masmenos(a,b);

	}


	
	







	return 0;
}
