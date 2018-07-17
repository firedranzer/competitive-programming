//https://www.interviewbit.com/problems/greatest-common-divisor/

int Solution::gcd(int A, int B) {
    if(A==0){
        return B;
    }
    gcd(B%A, A);
}
