//https://www.interviewbit.com/problems/trailing-zeros-in-factorial/

int Solution::trailingZeroes(int A) {
    int count = 1;
    int ans=0;
    while(count<=A){
        count *= 5; 
        ans += A/count;
    }
    return ans;
}
