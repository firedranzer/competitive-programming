//https://www.interviewbit.com/problems/verify-prime/

int Solution::isPrime(int A) {
    if (A <= 1)  return 0;
    if (A <= 3)  return 1;
 
    if (A%2 == 0 || A%3 == 0) return 0;
    
    //Prime numbers are of the form 6n-1 or 6n+1
    for (int i=5; i*i<=A; i=i+6)
        if (A%i == 0 || A%(i+2) == 0)
           return 0;
 
    return 1;
}
