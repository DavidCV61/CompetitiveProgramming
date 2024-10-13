/**
 * @input A : Integer
 * @input B : Integer
 * 
 * @Output Integer
 */

//Link: https://www.interviewbit.com/problems/greatest-common-divisor/
int gcd(int A, int B) {
    
    if(A==0) return B;
    return gcd(B%A,A);
}
