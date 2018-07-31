//https://www.interviewbit.com/problems/single-number/

int Solution::singleNumber(const vector<int> &A) {
    int n = A[0];
    for(int i=1; i<A.size(); i++){
        n = n^A[i];
    }
    return n;
}