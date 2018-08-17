//https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int ans = 0;

    for(int i=1;i<A.size();i++){
        int diffA = A[i]-A[i-1];
        int diffB = B[i]-B[i-1];
        if(abs(diffA)<abs(diffB)){
            ans += abs(diffB);
        }else{
            ans += abs(diffA);
        }
    }

    return ans;
}
