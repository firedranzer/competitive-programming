//https://www.interviewbit.com/problems/implement-strstr/

int Solution::strStr(const string A, const string B) {
    int h = A.length();
    int n = B.length();
    if(h==0 || n==0){
        return -1;
    }
    for(int i=0; i<h; i++){
        int j=0;
        if(B[0]==A[i]){
            while(j<n && B[j]==A[i+j])    j++;
            if(j==n){
                return i;
            }
        }
    }
    return -1;
}