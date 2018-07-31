//https://www.interviewbit.com/problems/min-xor-value/

int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(), A.end());
    int m = INT_MAX;
    int val=0;
    for(int i=0; i<A.size()-1; i++){
        val = A[i] ^ A[i+1];
        m = min(val, m);
    }
    return m;
}
