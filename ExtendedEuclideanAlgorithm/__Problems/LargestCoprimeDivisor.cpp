//Link: https://www.interviewbit.com/problems/largest-coprime-divisor/

int gcd(int a, int b){

	if(b==0) return a;
	return gcd(b,a%b);
}

int solve(int a,int b){

	int num=gcd(a,b);


		if(num==1) return a;
		return solve(a/num,b);



}
int Solution::cpFact(int A, int B) {
    
    
    return solve(A,B);
}
