//https://www.interviewbit.com/problems/palindrome-integer/

int Solution::isPalindrome(int A) {
    int rev = 0;
    int N = A;
    while(N>0){
        int rem = N%10;
        rev = rev*10 + rem;
        N = N/10;
    }
    if(A == rev){
        return 1;
    }
    else
        return 0;
}
