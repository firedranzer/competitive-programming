//https://www.interviewbit.com/problems/reverse-integer/

int Solution::reverse(int A) {
    int temp = abs(A);
    int rev = 0;
    while(temp>0){
        int rem = temp%10;
        //To check for overflow of result
        if(rev>(INT_MAX-rem)/10){
            return 0;
        }
        rev = rev*10 + rem;
        temp = temp/10;
    }
    // if(rev>=INT_MAX || (A<0 && -1*rev<=INT_MIN))   return 0;
    if(A<0){
        return -1*rev;
    }
    else if(A>=0)    return rev;
}
