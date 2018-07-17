//https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

//Kadane Algorithm

int Solution::maxSubArray(const vector<int> &A) {
    int localmax = A[0];
    int globalmax = A[0];
    for(int i=1; i<A.size(); i++){
        localmax = max(A[i], localmax + A[i]);
        if(localmax>globalmax)
            globalmax = localmax;
    }
    return globalmax;
}
